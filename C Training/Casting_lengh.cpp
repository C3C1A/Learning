#include<stdio.h>
#include<string.h>
int main(){

	int x;
	char str[]="TON";
	int i,len=strlen(str);
	printf("%s\n",str);
	for(i=0;i<len;i++)
		str[i]=str[i]+3;
	printf("%s\n",str);


	scanf("%d",&x);
	return 0;
}
