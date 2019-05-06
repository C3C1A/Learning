#include <stdio.h>
int main(){

    int x=0,N[13],n=13,i;

    for(i=0;i<13;i++)   scanf("%d",&N[i]);

    for(i=0;i<12,n>1;i++,n--)  x += (n*N[i]);
    x %= 11;
    if(x<=1||x>1){
        if(N[12]==1-x||N[12]==11-x) printf("Yes");
        else{
            printf("No");
            if(x<=1)    N[12] = 1-x;
            else    N[12] = 11-x;
            printf(" %d",N[12]);
        }
    }

    return 0;
}
