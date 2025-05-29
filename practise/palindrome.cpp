#include <iostream>
using namespace std;



long long palindrome(int num){

    long long reverse=0;

    while(num != 0){

        reverse = (reverse * 10) + (num%10);
        num /= 10;
    }


    return reverse;
}




int main(){


    int num = 121;

    long long reverse_no = palindrome(num);

    if(reverse_no == num){

        cout << "The number is palindrome";
    }
    else{

        cout << "The number is not palindrome";
    }


    return 0;
}