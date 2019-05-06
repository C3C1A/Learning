#include<stdio.h>
#define MAX 100
void swap(int *a,int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){

	int x,a=3,b=7;
	printf("%d %d",a,b);
	swap(&a,&b);
	printf("\n%d %d",a,b);


	scanf("%d",&x);
	return 0;
}