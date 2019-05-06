#include<stdio.h>
#include<string.h>
typedef struct{
	int day,month,year;
} date;
void edit(date &a);
int main(){

	int x;
	date d1 = {15,10,1992};
	edit(d1);
	printf("%d/%d/%d\n",d1.day,d1.month,d1.year);
	

	scanf("%d",&x);
	return 0;
}
void edit(date &a){
	a.year = a.year + 10;
}