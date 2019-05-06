#include <stdio.h>
double x;
 void my_func();
 int main()
 {
	 x = 1.1;
	 my_func();
	 printf("In main x = %f\n",x);
	 scanf("%d",&x);
	 return 0;
 }
 void my_func()
 {
	 x = 2.5;
	 printf("In my func x = %f\n",x);
 }