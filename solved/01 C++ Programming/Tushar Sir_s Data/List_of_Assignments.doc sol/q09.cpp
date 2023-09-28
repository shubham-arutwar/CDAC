#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    double result;
    char opp;
    do
    {
        cout << "Enter two numbers to perform arithmatic operation :\n";
        cin >> num1 >> num2;
    } while (num1 < 0 || num2 < 0);
    do
    {
        cout << "Enter an opperation to perform between 2 numbers : \nOptions are : + , - , * , / " << endl << " : ";
        cin >> opp;
    } while (opp=='+' && opp=='-' && opp=='*' && opp=='/');
    switch (opp)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "*** invalid operator ***";
    }
    cout << "Result of above arithmatic operation is : " << result << endl;
}