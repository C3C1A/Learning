#include <stdio.h>
#include <stdlib.h>

int compare (const void *a,const void * b){
	return (*(int *)a - *(int *)b);
}

int main(){
	int x[3];
	scanf("%d%d%d",&x[0],&x[1],&x[2]);
	qsort(x,3,sizeof(int),compare);
	if(x[0] + x[1] <= x[2]){
		printf("No");
	}
	else{
		printf("Yes ");
		if(x[0] * x[0] + x[1] * x[1] == x[2] * x[2]){
			printf("Yes");
		}
	}
	return 0;
}
