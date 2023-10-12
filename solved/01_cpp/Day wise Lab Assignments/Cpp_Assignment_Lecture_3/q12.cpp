#include<iostream>
using namespace std;

int main(){
    int num, digit, count=0;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Enter a digit to cout in the number : ";
    cin >> digit;
    for(int i=num; i%10!=0; i=i/10){
        int test_digit;
        test_digit = i%10;
        if(test_digit==digit){
            count++;
        }
    }
    cout << count << endl;
}