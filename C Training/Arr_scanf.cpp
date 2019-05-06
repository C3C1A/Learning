#include<stdio.h>
int main(){

	int i,j,a[2][3],x;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<3;j++)
			printf("  a[%d][%d] : %d",i,j,a[i][j]);
	}

	scanf("%d",&x);
	return 0;
}