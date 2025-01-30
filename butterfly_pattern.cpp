#include <iostream>
using namespace std;


int main(){

	int n=4;

	for(int i=1; i<=n ; i++){
		

		// TOP LEFT

		for(int j=1 ; j<=n; j++){		

			if(j <= i){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}

		// TOP RIGHT
		for(int j = 1; j <= n ; j++){
	
			if(j <= (n - i)){
				cout << " ";
			}
			else{
				cout << "*";
			}
		}

		cout << "\n";	
	}


	// BOTTOM SECTION
	for(int i=1 ; i <= n ; i++){

		for(int j=1 ; j <= n ; j++){

			if(j <= (n+1-i)){

				cout << "*";
			}
			else{
				cout << " ";
			}
		}

		for(int j=1; j<=n ; j++){
			
				if(j > (i-1)){
					cout << "*";
				}
				else{
					cout << " ";
				}
		}

		cout << "\n";
	}

	return 0;
}
