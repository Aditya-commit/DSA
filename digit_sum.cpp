#include <iostream>
#include <string>
using namespace std;


int main(){

	int num=2344;


	// APPROACH 1
	
	//string num_str = to_string(num);

	//int result = 0;

	//for(int i=0 ; i < num_str.length() ; i++){
		
	//	result += (num_str[i] - '0'); 
	//}
	//
	//
	//
	//APPROACH 2
	//
	int result = 0;

	while(true){
		
		int remainder = num%10;

		num = num/10;

		result += remainder;



		if(num == 0){
			
					result += num;

			break;
		}
	}

	cout << result;
	
	return 0;
}
