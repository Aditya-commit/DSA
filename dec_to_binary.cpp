#include <iostream>
#include <string>
using namespace std;


int main(){

    int num=96;

    string result="";


    while(num != 1){

        result = to_string(num%2) + result;

        num = num/2;

    }

    result = '1' + result;

    cout << result;

    return 0;
}