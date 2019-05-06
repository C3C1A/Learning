#include <stdio.h>
#include<string.h>

int main(){

    double num,total=0,x=0,y=0,min=0,result=0,r=0;
    int i;
    scanf("%lf",&num);
    min = num;
    for(i=1;i<=sqrt(num);i++){
            total = num / i;
            r = total - (int)total;
            result = total - i;
            if((result<min)&&(total-i>=1)&&r==0){
                    min = result;
                    x = i;
                    y = total;
            }
    }

    printf("%.0lf %.0lf",x,y);


    return 0;
}
