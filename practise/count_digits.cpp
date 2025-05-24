#include <iostream>
using namespace std;


int main(){

    unsigned int n=0;

    unsigned int counter=0;



    if(n == 0){
        counter = 1;
    }
    else{

        while(n > 0){

            n/=10;

            counter += 1;
        }
    }

    cout << "The total digits are " << counter;

    return 0;
}