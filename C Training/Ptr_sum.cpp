#include<stdio.h>
#define MAX 100
int main(){

	int x,a[5]={0,1,2,3,4},n=5,sum=0,*p;
	for(p=a;p<&a[n];p++)
		sum += *p;
	printf("%d",sum);


	scanf("%d",&x);
	return 0;
}