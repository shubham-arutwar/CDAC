#include <iostream>
using namespace std;

int pow(int, int);

int main (){
    int num, power=1, sum=0; 
    cout << "enter a number to check if its amstrong number or not : ";
    cin >> num;
    int tmp=num;
    for(int temp=num; temp>9; temp = temp/10){
        power++;
    }
    for(int i=0; i<power; i++){
        int digit=0;
        digit = tmp%10;
        sum = sum + pow(digit,power);
        tmp = tmp/10;    
    }
    if(sum==num){
        cout << "Number is armstrong number" << endl;
    }
    else{
        cout << "Number is not armstrong number" << endl;
    }
}

int pow(int num, int power){
    int product=1;
    for(int i=0; i<power; i++){
        product *= num;
    }
    return product;
}