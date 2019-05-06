#include <stdio.h>
#include<string.h>

int main(){

    int i;
    double num,r=0,result=0;
    scanf("%lf",&num);
    for(i=1;i<=num;i++){
            result = num / i;
            r = result - (int)result;
            if(r==0){
                printf("%d ",i);
            }
    }


    return 0;
}
