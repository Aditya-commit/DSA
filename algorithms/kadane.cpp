#include <iostream>
using namespace std;

// THIS ALGORITHM IS USED TO FIND THE MAX SUBARRAY SUM

// TIME COMPLEXITY = O(n)

int main(){

    int arr[5] = {34 , -3 , 43 , -30 , 493};

    int max_sum = 0;

    int current_sum = 0;

    for(unsigned int i=0 ; i < 5 ; i++){

        current_sum += arr[i];

        max_sum = max(current_sum , max_sum);

        if(current_sum < 0){

            current_sum = 0;
        }
    }

    cout << "The maximum subarray is " << max_sum << endl;

    return 0;
}