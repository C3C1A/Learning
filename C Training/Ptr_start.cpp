#include<stdio.h>
#define MAX 100
int main(){

	int x=5;
	int *countptr;
	countptr = &x;
	printf("%p",countptr);


	scanf("%d",&x);
	return 0;
}