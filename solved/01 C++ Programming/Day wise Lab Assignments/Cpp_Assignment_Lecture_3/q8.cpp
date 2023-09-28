#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num;
    cout<<"Enter a number ";
    cin>>num;
    int ans;
    int product=1;
    
    while(num!=0) {
        ans=num%10;
        product=product*ans;
        num=num/10;
    }
    
    cout<<"product of all digits in a number is :"<<product;

    return 0;
}