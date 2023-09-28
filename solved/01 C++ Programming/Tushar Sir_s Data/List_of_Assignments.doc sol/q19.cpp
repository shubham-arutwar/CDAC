#include<iostream>
using namespace std;

void fibonacci(int);

int main(){
	int num;
	cout << "Enter number of terms in fibonacci series to be printed : ";
	cin >> num;
	fibonacci(num);
}

void fibonacci(int num){
	int a=0, b=1;
	cout << a << " ";
	for(int i=1; i<num; i++){
		int x = a + b;
		a = b;
		b = x;
		cout << a << " ";
	}
	cout << endl;
}
