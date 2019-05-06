#include<stdio.h>
int F(int);
int main()
{
	int n,x,fac;
	scanf("%d",&x);
	
	
	
	fac = F(x);
	printf("factorial : %d",fac);
	
	
	
	scanf("%d",&n);
	return 0;
}
int F(int a)
{
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else
		return F(a-1)+F(a-2);
}