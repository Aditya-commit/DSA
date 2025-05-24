#include <iostream>
using namespace std;

int main(){

    unsigned int reverse = 0;

    unsigned int number = 124;

    while(number > 0){

        unsigned int remainder = number % 10;

        number /= 10;

        reverse = (reverse * 10) + remainder;

    }

    cout << reverse << endl;

    return 0;
}