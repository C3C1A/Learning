#include<stdio.h>
#include<string.h>
int main(){

	int x,i;
	char text[4][20];
	for(i=0;i<4;i++){
		printf("Enter text %d : ",i+1);
		scanf("%s",&text[i]);
	}

	for(i=0;i<4;i++)
		printf("%s %d\n",text[i] ,  strlen( text[i] )  );


	scanf("%d",&x);
	return 0;
}