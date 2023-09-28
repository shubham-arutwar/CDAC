#include<iostream>
using namespace std;

int main (){
    int base_salary, sales, commission, net_salary;
    do
    {
        cout << "Enter valid Base salary of employee : ";
        cin >> base_salary;
        cout << "Enter valid total sales by the employee : ";
        cin >> sales;
    } while (base_salary < 0 || sales < 0);
    sales <= 5000 ? 
        commission = 0
        : sales <= 7500 ?
            commission = sales * 3/100
            : sales <=10500 ?
                commission = sales * 8/100
                : sales <= 15000 ?
                    commission = sales * 11/100
                    : commission = sales * 15/100;
    net_salary = base_salary + commission;
    cout << "Base salary of employee is : " << base_salary << endl;
    cout << "Commission on " << sales << " is : " << commission << endl;
    cout << "Net salary of employee is : " << net_salary << endl;
}