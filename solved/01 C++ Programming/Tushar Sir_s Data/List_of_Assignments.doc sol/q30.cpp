#include<iostream>
using namespace std;

int main(){
    int subs;
    int *ptr;
    int avg=0;
    cout << "Enter number of subjects : ";
    cin >>  subs;
    ptr = new int[subs];
    cout << "Marks of each sub : ";
    for(int i=0; i<subs; i++){
        cin >> ptr[i];
        avg+= ptr[i];
    }
    avg=avg/(sizeof(ptr)/sizeof(ptr[0]));
    cout << "Average of marks of all subjects is : " << avg << endl;
}