#include <iostream>
using namespace std;

int main(){

	for(int i=1;i<=4;i++){
		
		for(int j=1; j < i ; j++){
			cout << " ";
		}

		for(int j=i; j<=4 ; j++){
			cout << i;
		}

		cout << "\n";
	}

	return 0;
}
