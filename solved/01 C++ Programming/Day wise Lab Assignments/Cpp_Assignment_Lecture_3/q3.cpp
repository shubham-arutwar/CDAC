#include <iostream>

using namespace std;

int main()
{
    int num1, num2, sum=0;
    cout << "enter 2 numbers to find sum of numbers between them \n";
    cin >> num1 >> num2;
    if(num1>num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    for (int i=num1; i<=num2; i++){
        sum = sum+i;
        cout << "counter " << i << " sum is " << sum << endl;
    }
    cout << "sum of numbers between " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}