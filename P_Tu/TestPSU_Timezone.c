#include <stdio.h>
#include<string.h>

int main(){

    FILE *fp;
    char time[10],day[10],name[5][100],start[5],fin[5],dot[5];
    int hour,hour1,hour2,min,min1,min2,zone1[100],i,zone2[100];

    fp = fopen("in.txt","r");

    for(i=0;i<100;i++){
        zone2[i] = 0;
    }

    for(i=0;!feof(fp);i++){
        fscanf(fp,"%s",&name[i]);
        fscanf(fp,"%d",&zone1[i]);
        fscanf(fp,"%c",&dot);
        fscanf(fp,"%d",&zone2[i]);
        //printf("%s %d\n",name[i],zone2[i]);
    }

    scanf("%s",&time); // เวลา

    if(strcmp(time,"noon")==0){
        strcpy(time,"12:00");
        hour1 = (time[0] - '0') * 10;
        hour2 = time[1] - '0';
        hour = hour1 + hour2;
        min1 = (time[3] - '0') * 10;
        min2 = time[4] - '0';
        min = min1 + min2;
        strcpy(day,"a.m.");
    }
    else if(strcmp(time,"midnight")==0){
        strcpy(time,"12:00");
        hour1 = (time[0] - '0') * 10;
        hour2 = time[1] - '0';
        hour = hour1 + hour2;
        min1 = (time[3] - '0') * 10;
        min2 = time[4] - '0';
        min = min1 + min2;
        strcpy(day,"p.m.");
    }
    else if(time[2]==':'){
        hour1 = (time[0] - '0') * 10;
        hour2 = time[1] - '0';
        hour = hour1 + hour2;
        min1 = (time[3] - '0') * 10;
        min2 = time[4] - '0';
        min = min1 + min2;
        scanf("%s",&day);
    }
    else if(time[1]==':'){
        hour = time[0] - '0';
        min1 = (time[2] - '0') * 10;
        min2 = time[3] - '0';
        min = min1 + min2;
        scanf("%s",&day);
    }

    scanf("%s",&start); // ประเทศที่เราอยู่
    scanf("%s",&fin); // ประเทศที่ต้องการ

    for(i=0;;i++){
        if(strcmp(start,name[i])==0){
            hour += (zone1[i]*(-1));
            for(i=0;;i++){
                if(strcmp(fin,name[i])==0){
                    hour += zone1[i];
                    if(zone2[i]==5){
                        min += 30;
                        if(min>=60){
                            hour++;
                            min = 0;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }

    if((hour==12&&min==0&&(strcmp(day,"a.m.")==0)) || (hour==0&&min==0&&(strcmp(day,"p.m.")==0)))
        printf("noon");
    else if((hour==12&&min==0&&(strcmp(day,"p.m.")==0)) || (hour==0&&min==0&&(strcmp(day,"a.m.")==0)))
        printf("midnight");
    else{
        if(hour>=12&&min>=0&&(strcmp(day,"p.m.")==0)){
            hour -= 12;
            printf("%d:%02d ",hour,min);
            printf("a.m.");
        }
        else if(hour>=12&&min>=0&&(strcmp(day,"a.m.")==0)){
            hour -= 12;
            printf("%d:%02d ",hour,min);
            printf("p.m.");
        }
        else if(hour<=0&&min>=0&&(strcmp(day,"p.m.")==0)){
            hour += 12;
            printf("%d:%02d ",hour,min);
            printf("a.m.");
        }
        else if(hour<=0&&min>=0&&(strcmp(day,"a.m.")==0)){
            hour += 12;
            printf("%d:%02d ",hour,min);
            printf("p.m.");
        }
        else{
            printf("%d:%02d ",hour,min);
            printf("%s",day);
        }
    }


    fclose(fp);
    return 0;
}
