#include<stdio.h>
#include<string.h>
int main(){

	int x;
	struct {
		char name[30];
		char detail[50];
		int age;
		char telephone[10];
	} address,newaddress = {"newUser","1 ratutid Haddyai Songkhla",20,"212895"};
	printf("Address of address variable is %p \n",&address);
	printf("Address of newaddress variable is %p \n",&newaddress);
	printf("sizeof of newaddress = %d\n",sizeof newaddress);

	scanf("%d",&x);
	return 0;
}