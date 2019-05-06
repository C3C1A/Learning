#include <stdio.h>
#include<string.h>

int main(){

    FILE *ifp,*ofp;
    char x[]={},y[]={};

    ifp = fopen("Ti.txt","r");
    ofp = fopen("Ai.txt","w");
    fscanf(ifp,"%s %s",&x,&y);
    fprintf(ofp,"%s",((x-'0')+(y-'0')));

    fclose(ifp);
    fclose(ofp);


    return 0;
}
