#include <iostream>
#include <math.h>
using namespace std;


int main(){

    int num = 3454;

    int reversed_no = 0;

    while(num != 0){

        int remainder = num%10;

        reversed_no = reversed_no * 10 + remainder;

        num /= 10;

    }


    cout << reversed_no;

    return 0;
}