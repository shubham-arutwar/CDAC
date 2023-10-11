#include<iostream>
using namespace std;

int main(){
    int arr[5];
    double avg=0;
    cout << "Enter marks of 5 subjects to find average marks" << endl;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){ //implicit type conv is automatic
        cout << "Subject " << i+1 << " : ";
        cin >> arr[i];
        if(avg == 0){
            avg = arr[i];
        }
        else{
            avg = (avg + arr[i])/2;
        }
    }
    cout << "Average of subjects is : " << avg << endl;
}

//explicit type conversion is manual 
//we use data type as dunction name to convert to that data type
//eg float x = 45.2343
//int(x) will be 45