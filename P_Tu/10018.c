#include <stdio.h>
int main()
{
    long long x[100],i;
    float average=0,sum=0;

    for(i=0;; i++){
        scanf("%lld",&x[i]);
        if(x[i]==-1)    break;
        sum += x[i];
    }
    average = sum/(i);
    printf("%.2f",average);

    return 0;
}
