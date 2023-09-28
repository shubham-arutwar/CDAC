#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    cout << "Enter 10 numbers in array" << endl;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << "   > ";
        cin >> arr[i];
    }
    cout << "Entered array is : ";
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int delete_num;
    cout << "Enter element of which position is to be deleted : ";
    cin >> delete_num;
    for(int i=delete_num; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]==0){
            arr[i]=arr[i+1];
        }
        else{
            arr[i]=arr[i+1];
        }
    }
    cout << "Modified array is : ";
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}