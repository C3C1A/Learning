#include <stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return (*(int *)a - *(int *)b);

}
int main(){

    int x[10],i;

    for(i=0;i<10;i++)   scanf("%d",&x[i]);
    qsort(x,10,sizeof(int),compare);
    for(i=0;i<10;i++)   printf("%d",x[i]);

    return 0;
}
