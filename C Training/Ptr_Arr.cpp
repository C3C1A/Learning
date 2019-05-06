#include<stdio.h>
#define MAX 100
int main(){

	int x,a[3]={5,7,2},*aptr;
	aptr = a;
	//chang position
	aptr = aptr + 2;
	printf("%d",*aptr);


	scanf("%d",&x);
	return 0;
}