#include <iostream>
using namespace std;


int main(){

    int number = 15;

    bool isPower = true;

    while(number != 1){

        int remainder = number%2;

        number = number/2;

        if(remainder != 0){
            isPower = false;
            break;
        }
    }

    if(isPower == true){

        cout << "The number is a power of 2";
    }
    else{
        cout << "The number is not a power of 2";
    }

    return 0;
}