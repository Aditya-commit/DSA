#include <iostream>
using namespace std;



unsigned long long factorial(int num){
	
	unsigned long long result=1;

	for(int i=num; i>=1; i--){
		result *= i;
	}

	return result;
}


int main(){

	int n=10 , r=8;

	cout << factorial(n)/(factorial(r) * (factorial(n-r)));

	return 0;
}
