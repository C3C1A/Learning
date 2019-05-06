#include <stdio.h>
int main(){

    long long x[1000],i,max=0,count=0,j;

    for(i=0;;i++){
        scanf("%lld",&x[i]);
        if(x[i]==-1)    break;
        count++;
    }
    for(i=0;i<count;i++){
        for(j=0;j<count-1;j++){
            if(x[j]>x[j+1]){
                max = x[j];
                x[j] = x[j+1];
                x[j+1] = max;
            }
        }
    }
    if(count%2==1){
        i = count / 2;
        printf("%lld",x[i]);
    }
    else{
        i = count / 2;
        if((x[i]+x[i-1])%2==0)    printf("%lld",((x[i]+x[i-1]) / 2));
        else    printf("%.1f",(x[i]+x[i-1]) / 2.0);
    }


    return 0;
}
