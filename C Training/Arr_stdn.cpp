#include<stdio.h>
#define MAX 100
int main(){

	int x,i,a[100],count=0,n;
	scanf("%d%d",&x,&n);
	for(i=0;;i++){
		if((x/n)>(n-1)){
			a[i] = x % n;
			x = x / n;
			count++;
		}
		else{
			a[i] = x % n;
			a[i+1] = x / n;
			count = count + 2;
			break;
			
		}
	}
	for(i=count-1;i>=0;i--){
		if (a[i]==10) printf("A");
		else if(a[i]==11) printf("B");
		else if(a[i]==12) printf("C");
		else if(a[i]==13) printf("D");
		else if(a[i]==14) printf("E");
		else if(a[i]==15) printf("F");
		else printf("%d",a[i]);
	}

	scanf("%d",&x);
	return 0;
}
