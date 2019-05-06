#include<iostream>
#include<cstdlib>
using namespace std;

int main (){
	int n,num[10000],i,table[10000],max;
	
	cin >> n;
	while(n!=0){
		for(i=0;i<n;i++){
			cin >> num[i];
		}
		for(i=0;i<n;i++){
			if(i==0){
				table[i] = num[i];
				max = table[i];
			}
			else{
				if(num[i] >= (num[i] + table[i-1])){
					table[i] = num[i];
					if(table[i] > max)	max = table[i];
				}
				else{
					table[i] = num[i] + table[i-1];
					if(table[i] > max)	max = table[i];
				}
				if(table[i] > max)	max = table[i];
			}
		}
		if(max<=0)	cout << "Losing streak." << endl;
		else cout << "The maximum winning streak is " << max << "." << endl;
		
		cin >> n;
	}

	return 0;
}
