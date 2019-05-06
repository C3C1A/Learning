#include<stdio.h>
void main(){
	int i,n,result,max=5;
	for(i=0;i<5;i++) {
		printf("Enter result : ");
		scanf("%d",&result);
		if(result==1)
			result++;
	}
	printf("Passed %d",result);
	printf("\nFailed %d",max-result);
	scanf("%d",&n);
}