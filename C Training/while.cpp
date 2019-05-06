#include<stdio.h>
void main(){
	int n,i=0;
	while(i<5){
		int j=0;
		while(j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	scanf("%d",&n);
}