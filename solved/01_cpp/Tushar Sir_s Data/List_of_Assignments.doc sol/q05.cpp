#include<iostream>
using namespace std;

int main (){
    float bs, ns, hra, da, gs, pf;
    cout << "Enter basic salary to calculate Net Salary of an employee : ";
    cin >> bs;
    hra = bs * 15 / 100;
    da = bs * 30 /100;
    gs = bs + hra + da;
    pf = gs * 12.5 /100;
    ns = gs - pf;
    cout << "Net salary of employee is : " << ns << endl;
    //HRA is 15% of bs
    //DA is 30% of bs
    //GS is BS + HRA + DA 
    //PF is 12.5% of GS
    //net_salary = GS -PF
}