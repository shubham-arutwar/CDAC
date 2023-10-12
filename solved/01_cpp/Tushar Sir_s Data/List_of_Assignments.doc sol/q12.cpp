#include<cmath>
#include<iostream>
using namespace std;

int main(){
    int num, count=0, result=0;
    cout << "Enter a number to check if its armstrong number or not : ";
    cin >> num;
    int tmp_num = num;

    while(tmp_num!=0){
        count++;
        tmp_num /=10;
    }
    tmp_num = num;
    while (tmp_num!=0)
    {
        result = result + int(pow(tmp_num%10, count));
        tmp_num /= 10;
    }
    result==num ? cout << "Entered number is armstrong number" : cout << "Entered number is not armstrong number";
    cout << endl;
}