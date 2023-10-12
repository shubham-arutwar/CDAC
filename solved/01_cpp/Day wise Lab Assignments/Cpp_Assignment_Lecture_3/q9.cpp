#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int reverse=0;
    int rem, temp;
    temp = num;
    while(num!=0) {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(temp==reverse) {
        cout<<"Number is palindrome" << endl;
    }
    else {
        cout<<"Number is not palindrome" << endl;
    }
    

    return 0;
}