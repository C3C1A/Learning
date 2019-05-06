#include<stdio.h>
int count_factor(int a[10])
{
	int x=0,i;
	for(i=0;i<10;i++)
	{
		if(40 % a[i] == 0)
			x++;
		
	}
	return x;
}

int main(){

	int x,i,a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	//count_factor(a);
	printf("%d",count_factor(a));

	scanf("%d",&x);
	return 0;
}
