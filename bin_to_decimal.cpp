#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main(){

    string binary_string = "101010";

    int result = 0;

    for(int i = 0 ; i < binary_string.length() ; i++){
        int value = pow(((binary_string[i] - '0') * 2) , ((binary_string.length() - 1)-i));
        result += value;
    }

    result -= 1; // TO DECREASE THE VALUE FOR THE LAST 0(POWER)

    cout << result << "\n";

    return 0;
}