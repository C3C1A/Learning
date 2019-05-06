#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	unsigned long long int b,p,m,x,i,total=1;
	cin >> b >> p >> m;
	x = b%m;
	if(p==0)	total = 1;
	else if(p%2==0){
		total = pow(x,p/2);
		total = (total%m)*(total%m);
		total = total % m;
	}
	else{
		total = pow(x,p-1);
		total = total % m;
		total = ((x%m)*total)%m;
	}
	cout << total;
	
	return 0;
}
