#include <iostream>
using namespace std;


int main(){

	int n=20;
	int fibo[n];

	fibo[0]=0;
	fibo[1]=1;

	for(int i=2; i<=n; i++){
		
		fibo[i] = fibo[i-2] + fibo[i-1];
	}


	// PRINT THE FIBONACCI SERIES
	for(int i = 0 ; i < n ; i++){
		cout << fibo[i] << " ";
	}

	cout << "\n";

	return 0;
}
