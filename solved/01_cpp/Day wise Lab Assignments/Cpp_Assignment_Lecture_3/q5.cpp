#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num;
    cout<<"Enter a number ";
    cin>>num;
    int ans;
    
    while(num!=0) {
        ans=num%10;
        num=num/10;
    }
    
    cout<<"First digit of number is :"<<ans;

    return 0;
}