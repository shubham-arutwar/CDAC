//7. Write a program to find leap year by using:
//a. if-else and logical operators (&& and ||)
//b. Conditional Operators (? :)							
//(A leap year is divisible by 4 and is not divisible by 100 but it could be divisible by 400)

#include<iostream>
using namespace std;

int main(){
    int year;
    do
    {   
        cout << "Enter a valid year number to find its leap year or not : ";
        cin >> year;
    } while (year<1);
    year%4==0 ? (year%100==0 ? (year%400==0 ? cout << year << " is leap year" : cout << year << " is not leap year") : cout << year << " is leap year") : cout << year << " is not leap year";
    cout << endl;
}