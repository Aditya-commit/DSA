#include <iostream>
using namespace std;

int main(){
    
    unsigned int n=5;

    unsigned int arr[n] = {1 , 2 , 3 , 4 , 5};

    for(unsigned int start=0 ; start < n ; start++){

        for(unsigned int end=start ; end < n ; end++){
            
            for(unsigned int iterator=start; iterator <= end; iterator++){

                cout << arr[iterator];
            }

            if(end < n-1){
                cout << ',';
            }
        }
        cout << endl;
    }

    return 0;

}