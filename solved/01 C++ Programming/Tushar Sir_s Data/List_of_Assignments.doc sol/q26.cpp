#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    cout << "Current array is : ";
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int insert_num, num;
    cout << "Enter element of which position is to be added : ";
    cin >> insert_num;
    cout << "Enter number to be inserted : ";
    cin >> num;
    for(int i=(sizeof(arr)/sizeof(arr[0]))-1; i>insert_num-2; i--){
        arr[i]=arr[i-1];
    }
    arr[insert_num-1]=num;
    cout << "Modified array is : ";
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}