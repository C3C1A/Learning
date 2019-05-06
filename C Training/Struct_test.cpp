#include<stdio.h>
#include<string.h>
int main(){

	int x;
	struct address
	{	char name[30];
		char detail[50];
		int age;
		char telephone[10];
	};
	struct address input;
	strcpy(input.name,"User Example");
	strcpy(input.detail,"1 ratutid Haddyai Songkhla");
	input.age=20;
	strcpy(input.telephone,"212895");
	printf("%s\n",input.name);
	printf("%s\n",input.detail);
	printf("%d\n",input.age);
	printf("%s\n",input.telephone);


	scanf("%d",&x);
	return 0;
}