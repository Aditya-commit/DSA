#include <iostream>
#include <math.h>
using namespace std;



int getNumberLength(int x){

    int counter = 0;

    while(x > 0){
        x/=10;
        counter += 1;
    }

    return counter;
}




bool checkArmstrong(int x){

    int num = x;
    int sum = 0;

    int numberLength = getNumberLength(x);

    while(num > 0){

        sum += pow(num%10 , numberLength);

        num /=10;
    }

    if(sum == x){
        return true;
    }
    
    return false;
}


int main(){

    bool isArmstrong = checkArmstrong(16324);

    if(isArmstrong == 1){
        cout << "The number is armstrong";
    }
    else{
        cout << "The number is not armstrong";
    }

    return 0;
}