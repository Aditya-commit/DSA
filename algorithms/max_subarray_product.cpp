#include <iostream>
using namespace std;

int main(){

    unsigned int size=3;

    // int arr[size] = {2 , 4 , 20 , -6 , 3 , 10 , -30 , -90};
    int arr[size] = {-2 , 0 , -1};

    int prefix = 1;
    int suffix = 1;
    int max_prod = INT_MIN;

    for(unsigned int i=0 ; i < size ; i++){

        if(prefix == 0) prefix=1;
        if(suffix == 0) suffix=1;

        prefix *= arr[i];
        suffix *= arr[size - 1 - i];

        max_prod = max(max_prod , max(prefix , suffix));
    }

    cout << max_prod;

    return 0;
}