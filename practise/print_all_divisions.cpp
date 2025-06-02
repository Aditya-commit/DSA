#include <iostream>

using namespace std;

int main(){

	int num = 64;

	int mirror_divisor = num;

	unsigned int counter=2;

	unsigned int total_divisors = 2;

	
	cout << 1 << endl << num << endl;
	

	while(counter <= num){

	
		if(num%counter == 0){

			
			if(mirror_divisor == counter){
				break;
			}
			else{

				if(num/counter == counter){

					cout << counter << endl;

					total_divisors += 1;
				}
				else{
					mirror_divisor = num/counter;
					
					cout << counter << endl << num/counter << endl;

					total_divisors += 2;
				}
			}

		}

		counter += 1;
	}

	cout << "Total number of divisors are " << total_divisors;

	return 0;
}
