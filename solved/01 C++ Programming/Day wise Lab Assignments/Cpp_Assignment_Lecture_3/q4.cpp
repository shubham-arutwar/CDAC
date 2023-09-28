#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "enter 2 numbers to find prime number between them \n";
    cin >> num1 >> num2;
    if (num1>num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    cout << "prime numbers between " << num1 << " and " << num2 << " are : ";
    for(int i=num1; i<=num2; i++){
        int count=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count<3){
            cout << i << " ";
        }
    }
    return 0;
}