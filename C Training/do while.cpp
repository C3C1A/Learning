#include<stdio.h>
void main(){
	int i=0,n=5;
	
	do{
		int j=0;
		do{
			printf("*");
			j++;
		}while(j<=i);
			printf("\n");
		i++;
	}while(i<n);
scanf("%d",&n);
}