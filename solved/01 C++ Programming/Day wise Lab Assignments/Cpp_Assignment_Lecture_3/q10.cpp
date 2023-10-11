#include <iostream>
using namespace std;

int main (){
    int num, sum = 0;
    cout << "enter a number to check if its perfect number or not : ";
    cin >> num;
    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            sum = sum + i;
        }
    }
    if(sum==num){
        cout << "number is perfect number" << endl;
    }
    else{
        cout << "number is not perfect number" << endl;
    }
}