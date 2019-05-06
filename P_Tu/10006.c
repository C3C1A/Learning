#include <stdio.h>
#include<math.h>
int main(){

    long long x1,x2,y1,y2,r;
    float root=0;

    scanf("%lld%lld%lld%lld%lld",&x1,&y1,&r,&x2,&y2);
    root = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    if(root<=r) printf("Yes");
    else    printf("No");

    return 0;
}
