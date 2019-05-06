#include<stdio.h>
int get_volt(int,int);
int main()
{
	int i,r,v=0,n;
	scanf("%d",&i);
	scanf("%d",&r);
	v = get_volt(i,r);
	printf("%d",v);
	scanf("%d",&n);
	return 0;
}
int get_volt(int a,int b)
{
	int x;
	x = a * b;
	return x;
}