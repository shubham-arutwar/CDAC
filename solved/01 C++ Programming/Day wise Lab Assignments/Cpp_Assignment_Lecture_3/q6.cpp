#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num;
    cout<<"Enter a number ";
    cin>>num;
    int ans;
    int sum=0;
    
    while(num!=0) {
        ans=num%10;
        sum=sum+ans;
        num=num/10;
    }
    
    cout<<"Sum of all digits in a number is :"<<sum;

    return 0;
}