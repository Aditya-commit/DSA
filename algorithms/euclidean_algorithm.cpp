#include <iostream>
using namespace std;

int main(){

    int num1 = 36 , num2=18;

    while(num1 > 0 && num2 > 0){

        if(num1 > num2){

            num1 %= num2;
        }
        else{
            num2 %= num1;
        }
    }

    if(num1 == 0){
        cout << "the GCD is " << num2;
    }
    else{
        cout << "The GCD is " << num1;
    }

    return 0;
}


// TIME COMPLEXITY - O(log(min(a,b)))