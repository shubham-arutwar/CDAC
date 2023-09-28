#include<iostream>
using namespace std;

int main(){
    int subs, sum = 0;
    int avg;
    int *arr = new int[subs];
    cout << "Enter number of subjects student have : ";
    cin >> subs;
    cout << "Enter marks of the student in subjects" << endl;
    for(int i=0; i<subs; i++){
        cout << "Subject " << i+1 << " : ";
        cin >> arr[i];
        sum+=arr[i];
    }
    avg = sum/subs;
    cout << "Average marks of all subjects is : " << avg << endl;
}