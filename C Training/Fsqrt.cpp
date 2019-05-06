#include<stdio.h>
#include<math.h>

double get_s(double a,double b,double c)
{
	return (a+b+c)/2;
}
double get_A(double s,double a,double b,double c)
{
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

void main()
{
	float A,s,a,b,c;

	scanf("%f %f %f",&a , &b , &c);
	

	s = get_s(a,b,c);
	A = get_A(s,a,b,c);
	
	printf("%f",A);
	scanf("%d",&s);
}