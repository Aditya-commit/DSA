#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main(){

    int number = 10;



    // STORING THE BINARY RESULT AS STRING
    // ------------------------------------


    // string binary_string = "";

    // while(number != 1){

    //     int remainder;

    //     remainder = number%2;
    //     number = number/2;

    //     binary_string = to_string(remainder) + binary_string;
    // }

    // binary_string = "1" + binary_string;

    // cout << binary_string;
    // _______________________________________________________________________________________________________



    // STORING THE BINARY RESULT AS INTEGER

    int binary_number = 0;


    int counter = 0;

    while(number > 0){

        int remainder;

        remainder = number%2;
        number = number/2;

        binary_number += remainder * pow(10 , counter);

        counter += 1;
    }


    cout << binary_number;

    return 0;
}