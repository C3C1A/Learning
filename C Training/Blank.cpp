#include<stdio.h>
#define MAX 100
int main(){

	int x,i,j,prime=0;
	for(i=2;i<=MAX;i++){
		if(i==2)
			printf("%d ",i);
		for(j=i-1;j>=2;j--){
			if(i%j==0){
				prime = false;
				break;
		}
			else
				prime = true;
	}
		if(prime == true)
			printf("%d ",i);
	}


	scanf("%d",&x);
	return 0;
}