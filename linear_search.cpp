#include <iostream>
using namespace std;


int main(){


    int arr[] = {34 , 44 , 233 , 124 , 55};

    int target=134;

    unsigned int size = sizeof(arr) / sizeof(arr[0]);

    unsigned int counter=0;

    bool found=false;

    while(counter < size){

        if(arr[counter] == target){

            found=true;
            break;
        }
        else{

            counter += 1;
        }
    }

    if(found == true){

        cout << "Target found";
    }
    else{
        cout << "Target not found";
    }

    return 0;
}