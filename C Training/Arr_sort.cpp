#include<stdio.h>
#define MAX 10
int main(){

	int x,i,j,tmp,a[MAX]={9,8,7,6,5,4,3,2,1,0};
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX-1;j++){
			if(a[j]>a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				
				
			}
		}
	}
	for(i=0;i<MAX;i++)		
	printf("%d",a[i]);


	scanf("%d",&x);
	return 0;
}