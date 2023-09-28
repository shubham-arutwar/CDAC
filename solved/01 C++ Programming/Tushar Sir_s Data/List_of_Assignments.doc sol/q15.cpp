#include<iostream>
using namespace std;

void print_num(int num1, int num2, int num3){
    cout << num1 << num2 << num3;
}

int main (){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            for(int k=1; k<=3; k++){
                print_num(i,j,k);
                cout << "\t";
            }
            cout << endl;
        }
    }
}