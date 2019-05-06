#include<stdio.h>
#include<string.h>
typedef struct{
	double re;
	double im;
} complex;
void display(complex a);
int main(){

	complex x;
	x.re = 1;
	x.im = 0.75;
	display(x);
	

	scanf("%d",&x);
	return 0;
}
void display(complex a){
	printf("%.2f + %.2f\n",a.re,a.im);
}