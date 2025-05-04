#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    unsigned int size=5;

    int arr[size] = {2 , 3 , 7 , 8 , 10};

    int target=9;

    vector<int> vec;

    for(unsigned int i = 0 ; i < size-1 ; i++){

        for(unsigned int j=i+1 ; j < size ; j++){

            if(arr[i] + arr[j] == target){

                vec.push_back(i);
                vec.push_back(j);
            }
        }
    }

    if(vec.size() == 2){

        cout << arr[vec.at(0)] << " " << arr[vec.at(1)];
    }
    else{
        cout << "No paris available";
    }
    
    cout << endl;

    return 0;
}