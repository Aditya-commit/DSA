#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main(){

    // _______________________________________________________________________

                                // METHOD 1

    // string binary_string = "101010";

    // int result = 0;

    // for(int i = 0 ; i < binary_string.length() ; i++){
    //     int value = pow(((binary_string[i] - '0') * 2) , ((binary_string.length() - 1)-i));
    //     result += value;
    // }

    // result -= 1; // TO DECREASE THE VALUE FOR THE LAST 0(POWER)

    // cout << result << "\n";

    // _______________________________________________________________________
    
    




    
    // _______________________________________________________________________

                            // METHOD 2
    

    
        unsigned long long binary = 1100000;


        int result = 0 , power=0;

        int remainder;

        while(binary != 0){

            remainder = binary%10;

            binary = binary/10;

            result += remainder * pow(2 , power);

            power += 1;
        }

        cout << result;


    // _______________________________________________________________________


    
    
    return 0;
}