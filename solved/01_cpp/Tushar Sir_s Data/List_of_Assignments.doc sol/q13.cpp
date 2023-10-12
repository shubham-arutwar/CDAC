#include<iostream>
using namespace std;

int main (){
    int num, count=0;
    cout << "Enter a number to check if its prime or not : ";
    cin >> num;
    if(num == 1 || num == 2){
        num==1 ? void(cout << "Number is not prime" << endl) : void(cout<< "Number is prime" << endl);
    }
    else{
        for(int i=1; i<=(num/2)+1; i++){
            num%i==0 ? void(count++) : void(cout << "");
        }
        count==1 ? void(cout << "Number is prime") : void(cout << "Number is not prime");
        cout << endl;
    }
}