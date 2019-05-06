#include <stdio.h>
int main(){

    long long x[5],i,max=0;

    for(i=0;i<5;i++){
        scanf("%lld",&x[i]);
        if(x[i]>=max)   max = x[i];
    }
    printf("%lld",max);


    return 0;
}
