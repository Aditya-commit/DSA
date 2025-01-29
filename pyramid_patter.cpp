#include <iostream>
using namespace std;



int main(){

	int n=10;

	for(int i=1; i<=n; i++){
		
		// LOOP FOR SPACE
		for(int j=i ; j < n ; j++){
			cout << " ";
		}

		for(int j=1; j <i;j++){
			cout << j;
		}

		for(int k=i; k > 0 ; k--){
			cout << k;
		}


//		LOOP FOR SPACE
		for(int j=i ; j < n ; j++){
			cout << " ";
		}

		cout << "\n";
	}

	return 0;
}
