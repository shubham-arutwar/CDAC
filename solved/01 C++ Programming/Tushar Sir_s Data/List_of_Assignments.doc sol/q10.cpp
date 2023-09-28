//not optimal sol just practicing pass by ref
#include<iostream>
using namespace std;

void largest_num(int*, int*, int*, int*);
int largest_num(int*, int*, int*);

int main (){
    int num1, num2, num3, result;
    cout << "Enter 3 numbers to find maximum out of 3 :" << endl;
    cin >> num1 >> num2 >> num3;
    largest_num(&num1, &num2, &num3, &result);
    cout << "Largest value out of 3 is " << result << endl;
    result = largest_num(&num1, &num2, &num3);
    cout << "Largest value out of 3 is " << result << endl;
}

void largest_num(int *num1, int *num2, int *num3, int *result){
    *result = *num1 < *num2 ? (*num2 < *num3 ? *num3 : *num2) : (*num1 < *num3 ? *num3 : *num1);
}

int largest_num(int *num1, int *num2, int *num3){
    int result = *num1 < *num2 ? (*num2 < *num3 ? *num3 : *num2) : (*num1 < *num3 ? *num3 : *num1);
    return result;
}