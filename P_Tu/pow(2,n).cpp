#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	long long int n,total;
	cin >> n;
	if(n==0)	total = 1;
	else if(n%2==0){
		total = pow(2,n/2);
		total = total*total;
	}
	else{
		total = pow(2,n-1);
		total = 2*total;
	}
	cout << total;
	
	return 0;
}
