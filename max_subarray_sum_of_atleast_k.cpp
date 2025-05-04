#include <iostream>
using namespace std;

int main(){

    unsigned int size=6;
    unsigned int k=3;

    int arr[size] = {2 , 6 , 8, -3  , 4 , 15};

    int max_sum = INT_MIN;
    int current_sum = 0;

    if(size < k){

        throw ("Invalid values");
    }
    else{

        unsigned int counter = 0;

        for(unsigned int i=0 ; i < size ; i++){

            current_sum += arr[i];

            counter += 1; // INCREASE THE COUNTER

            if(counter >= 3){
                max_sum = max(current_sum , max_sum);
            }

            if(arr[i] < 0){
                // IF THE CURRENT ELEMENT IS NEGATIVE SKIP THIS CONDITION
                current_sum = 0;
                counter = 0;
            }
        }

        cout << "The max sum of subarray is " << max_sum;
    }

    return 0;
}