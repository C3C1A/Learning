#include<stdio.h>
int square(int x);
int main()
{
	int a=2,b;
	b = square(a);
	printf("b = %d \n",b);
	scanf("%d",&b);
	return 0;
}
int square(int x)
{
	int y;
	y = x * x;
	return y;
}