#include <stdio.h>
int main(){
	int i; // run of line
	int j; // run of stars each line
	int k; // run of spacing before star each line
	int n = 5; // no. of line
	/*
	n = 5 method;
	i	j	k
	0	1	4
	1	3	3
	2	5	2
	3	7	1
	4	9	0
	+1	+2	-1 // RATE!!!
	*/

	for(i = 0;i < n;i ++){
		for(k = 0;k < n - i - 1;k ++) printf(" ");
		for(j = 0;j < 2 * i + 1;j ++) printf("*");
		printf("\n");
	}

	return 0;
}
