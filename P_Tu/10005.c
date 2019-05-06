#include <stdio.h>
int main(){

    long long a[4],i,j,thm=0;

    for(i=0;i<4;i++)    scanf("%lld",&a[i]);

    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            if(a[j]>a[j+1]){
                thm = a[j];
                a[j] = a[j+1];
                a[j+1] = thm;
            }
        }
    }
    for(i=0;i<4;i++)    printf("%lld",a[i]);

    return 0;
}
