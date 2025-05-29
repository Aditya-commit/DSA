#include <iostream>
using namespace std;

int main(){

    int reverse = 0;

    int number = 33466;

    while(number != 0){

        reverse = (reverse * 10) + (number % 10);

        number /= 10;
    }

    cout << reverse << endl;

    return 0;
}