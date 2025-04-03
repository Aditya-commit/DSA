#include <iostream>
#include <math.h>
using namespace std;


int main(){


    int arr[] = {30 , 44 , 439 , 4093};

    int size= sizeof(arr) / sizeof(arr[0]);

    int middle_index = floor(size/2);

    int counter=0;

    while(counter < middle_index){

        int temp = arr[counter];

        arr[counter] = arr[size-1-counter];

        arr[size-1-counter] = temp;

        counter  += 1;
    }

    counter = 0;

    while(counter < size){
        cout << arr[counter] << " ";

        counter += 1;
    }

    return 0;
}