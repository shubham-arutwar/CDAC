#include<iostream>
using namespace std;

int main(){
    int num, rev=0;
    cout << "Enter a number : ";
    cin >> num;
    for(int i=num; i%10!=0; i/=10){
        int digit = i%10;
        rev = rev*10 + digit;
    }
    
}

