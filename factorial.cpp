#include <iostream>
using namespace std;


int main(){

	int n=20;

	unsigned long long result=1;

	for(int i=n; i >= 1 ; i--){

		result = result * i;
	}

	cout << result << "\n";

	return 0;
}
