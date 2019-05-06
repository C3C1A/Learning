#include <stdio.h>
#include<string.h>

int main(){

    FILE *ifp,*ofp;
    unsigned long long x,y,sum=0;

    ifp = fopen("Ti.txt","r");
    ofp = fopen("Ai.txt","w");
    fscanf(ifp,"%llld %llld",&x,&y);
    sum = x+y;
    fprintf(ofp,"%lllf",sum);

    return 0;
}
