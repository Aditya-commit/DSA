// Maximum Sum Subarray of Size at least K
// Given an array and an integer k, find the maximum sum of a subarray with at least k elements

#include <iostream>
using namespace std;

int main(){

    unsigned int n=6;

    int arr[n] = {34 , 44 , -132 , 34 , 4 , 343};

    int final_max_sum = arr[0];

    int current_max_sum = 0;


    unsigned int k = 3;

    unsigned int no_of_elements = 1;


    int current_sum = 0;


    for(unsigned int i = 0 ; i < n ; i++){

        current_sum += arr[i];

        current_max_sum = max(current_sum , current_max_sum);

        if(no_of_elements >= k){

            final_max_sum = max(final_max_sum , current_max_sum);

        }

        if(current_sum < 0){
            current_sum = 0;
        }
        else{
            no_of_elements += 1;
        }
    }

    // cout << "The maximum sum of subarray with atleast " << k << " elements = " << final_final_max_sum << endl;
    
    cout << final_max_sum << endl;

    return 0;

}