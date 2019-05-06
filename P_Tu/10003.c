#include <stdio.h>
int main(){

    int x,y;
    scanf("%d%d",&x,&y);

    if(y <= 175 + 75*x ) printf("Kill");
    else{
        if(x<3) printf("%d",y - 100*x - 50);
        else    printf("%d",y-100*x);
    }


    return 0;
}
