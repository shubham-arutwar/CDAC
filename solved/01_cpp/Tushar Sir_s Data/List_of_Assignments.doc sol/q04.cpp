#include<iostream>
using namespace std;

void swap_using_3_var(int *, int *);
void swap_using_2_var(int *, int *);

int main(){
    int num1, num2;
    cout << "Enter 2 numbers to swap : " << endl;
    cin >> num1 >> num2;
    swap_using_2_var(&num1, &num2);
    cout << "Numbers after swap : " << num1 << " | " << num2 << endl;
    swap_using_3_var(&num1, &num2);
    cout << "Numbers after swap : " << num1 << " | " << num2 << endl;
}

void swap_using_2_var(int * num1, int * num2){
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

void swap_using_3_var(int * num1, int * num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}