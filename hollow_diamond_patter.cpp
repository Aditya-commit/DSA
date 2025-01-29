#include <iostream>
using namespace std;


int main(){

	int n=23;

	// LOOP FOR THE TOP SECTION
	for(int i=1; i<=n;i++){
		
		for(int j=1; j<=n ; j++){
			
			if(j == (n-i+1)){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}


		//LOOP TO ADD SPACE TO THE RIGHT
		for(int j=1 ; j <=n; j++){
			
			if(j == i && i!=1){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}

		cout << "\n";
	}

	// LOOP FOR THE BOTTOM SECTION
	for(int i=1 ; i< n ; i++){
	
		// LOOP FOR THE LEFT SECTION
		for(int j=1; j <=n ; j++){
			
			if(j == (i+1)){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}

		// LOOP FOR THE RIGHT SECTION
		for(int j = 1 ; j < n ; j++){
			
			if(j == n- i){
				if(i != (n-1)){
					cout << "*";
				}
			}
			else{
				cout << " ";
			}
		}

		cout << "\n";
		
	}

	return 0;
}
