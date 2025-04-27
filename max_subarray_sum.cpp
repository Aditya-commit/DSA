#include <iostream>
using namespace std;


// USING BRUTEFORCE APPROACHU


int main(){
    
    unsigned int n=5;

    // unsigned int arr[n] = {1 , 2 , 3 , 4 , 5};
    int arr[n] = {34 , -3 , 43 , -30 , 493};

    int max_sum = 0;

    for(unsigned int start=0 ; start < n ; start++){

        for(unsigned int end=start ; end < n ; end++){

            int sum=0;

            for(unsigned int iterator=start; iterator <= end; iterator++){

                sum += arr[iterator];

            }

            if(sum > max_sum){
                max_sum = sum;
            }
        }
    }

    cout << max_sum;

    return 0;

}