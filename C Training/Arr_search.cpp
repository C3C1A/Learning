#include<stdio.h>
#define MAX 10
int main(){

	int x,i,a[MAX]={0,1,2,3,4,4,5,6,4,7};
	scanf("%d",&x);
	for(i=0;i<MAX;i++){
		if(a[i]==x)
			printf("%d ",i+1);
	}


	scanf("%d",&x);
	return 0;
}
