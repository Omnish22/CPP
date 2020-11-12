#include<iostream>
using namespace std;

int main(){

    float basics, allowences, deduction,net_salary;

    cout<<"enter basic salary ";
    cin>>basics;
    cout<<"enter allowences ";
    cin>>allowences;
    cout<<"enter deduction ";
    cin>>deduction;

    net_salary = basics + (allowences*basics/100) - (deduction*basics/100);
    cout<<"net salary is "<<net_salary;
    return 0;
}