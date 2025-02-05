#include <iostream>
using namespace std;


int main(){

    // ----------------------------------------------------------
                            // METHOD 1

    int num=1024;

    int power = 0;

    bool isPower = true;

    while(num != 1){

        int remainder = num%2;

        if(remainder == 0){

            num /= 2;
            power += 1;
        }
        else{
            isPower=false;
            break;
        }
    }

    if(isPower){

        cout << "The number is the power of 2 by " << power << "\n";
    }
    else{
        cout << "The number is not the power of 2\n";
    }

    // ----------------------------------------------------------

    
    
    // ----------------------------------------------------------
    
    
                    // METHOD 2
    
    int num1 = 34;

    if ((num1 & (num1 - 1)) == 0){
        cout << "The number is a power of 2\n";
    }
    else{
        cout << "The number is not the power of 2\n";
    }

    
    // ----------------------------------------------------------

    return 0;
}