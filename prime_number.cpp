#include <iostream>
using namespace std;


int main(){


    unsigned int n=6;

    for(unsigned int i = 2 ; i <= n ; i++){

        if((n%i == 0) && (n != i)){
            cout << "The number is not a prime number" << endl;
            return 0;
        }
    }

    cout << "The number is a prime number" << endl;

    return 0;
}