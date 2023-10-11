#include <iostream>
using namespace std;

int max(int, int);

int main()
{
    int num1, num2;
    cout << "Enter wo numbers to find max among them : ";
    cin >> num1 >> num2;
    int maxAdd = max(num1, num2);
    cout << "Address of max number is : " << maxAdd << endl;
}

int max(int num1, int num2)
{
    int maxNum = 0, maxAdd;
    num1 < num2 ? num2 : num1;
    return maxAdd;
}