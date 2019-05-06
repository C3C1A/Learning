#include<stdio.h>
int factorial(int);
int main()
{
	int n,fac;
	scanf("%d",&n);
	
	
	
	fac = factorial(n);
	printf("factorial : %d",fac);
	
	
	
	scanf("%d",&n);
	return 0;
}
int factorial(int a)
{
	int total=1;
	if(a>0)
	{
		for(;0<a ;  a-- )
			total *=   a;
		
		return total;
	}
	else
		return 0;
}