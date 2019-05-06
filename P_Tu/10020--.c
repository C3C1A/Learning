#include <stdio.h>
int main(){

    long long x[1000],box[1000],i,max=0,count=0,j;

    for(i=0;;i++){
        scanf("%lld",&x[i]);
        if(x[i]==-1)    break;
        count++;
    }
    for(i=0;i<count;i++){
        //if(x[i]==x[i+1]) break;
        for(j=0;j<count;j++){
            if(x[j]==x[j+1]) break;
            else if(x[j]!=x[j+1]){
                if(x[i]==x[j])  box[i] += 1;
            }
        }

    }
    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            if(box[i]==box[j]){
                break;
            }
            else{
                if(box[i]>max) max = box[i];
            }
        }
    }
    if(box[i]==box[j])  printf("No");
    else    printf("%lld",max);



    return 0;
}
