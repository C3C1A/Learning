#include<stdio.h>
#define MAX 100
float avg(float s[],int n_st)
{
	int i;
	float total=0.0;
	for(i=0;i<n_st;i++)
		total+=s[i];
	return (total/n_st);
}

int main(){

	int n=10,x,i;
	float score[MAX];
	/*
	***if you want to change n
	printf("Number of students");
	scanf("%d",&n);*/
	for(i=0;i<n;i++){
		printf("Enter score %d : ",score[i]);
		scanf("%f",&score[i]);
	}
	printf("Average score = %5.2f\n",avg(score,n));


	scanf("%d",&x);
	return 0;
}