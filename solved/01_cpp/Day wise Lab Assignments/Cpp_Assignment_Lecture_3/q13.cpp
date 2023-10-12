#include<iostream>
using namespace std;

int main(){
    int num=0, rev=0;
    cout << "enter a number to print itss digits in words : ";
    cin >> num;
    for(int i=num; i%10!=0; i=i/10){
        int digit = i%10;
        rev = rev*10 + digit;
    }
    for(int i=rev; i%10!=0; i=i/10){
        int digit = i%10;
        switch (digit)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        case 0:
            cout << "zero";
            break;
        default:
            break;
        }
        cout << " ";
    }
    cout << endl;
}