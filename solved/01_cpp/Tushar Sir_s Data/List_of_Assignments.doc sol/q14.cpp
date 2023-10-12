#include<iostream>
using namespace std;

int main (){
    int length, breadth;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter breadth : ";
    cin >> breadth;
    for(int i=0; i<breadth; i++){
        cout <<"\t";
        for(int j=0; j<length; j++){
            if((i==0 && j==0) || (i==0 && j+1==length) || (i+1==breadth && j+1==length) || (i+1==breadth && j==0)){
                cout << "+";
            }
            else if((i==0 || i+1==breadth)){
                cout << " - ";
            }
            else if(j==0 || j+1==length){
                cout << "|";
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}