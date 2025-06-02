#include <iostream>
#include <math.h>
using namespace std;


int main(){

	unsigned int num = 17;

	unsigned int counter = 2;

	if(num >= 2 && num <= 3){
		cout << "The number is not a prime number";
		return 0;
	}
	else if(num == 4){
		cout << "The number is not a prime number";
		return 0;
	}


	while(counter <= sqrt(num)){

		if(num%counter == 0){
			
			cout << "The number is not a prime number" << endl;
			break;
		}


		counter += 1;

	}
	
	return 0;
}
