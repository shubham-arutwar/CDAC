#include<iostream>
using namespace std;

void getDate(int*, int*, int*);
void getInput(string, int *);

int main(){
	int day, month, year;
	getDate(&day, &month, &year);
	cout << "Date in dd/mm/yyy format is : " << day << "/" << month << "/" << year << endl;
}

void getDate(int *day, int *month, int *year){
	getInput("Enter day", day);
	getInput("Enter month", month);
	getInput("Enter year", year);
}

void getInput(string message, int *var){
	cout << message << " : ";
	cin >> *var;
}
