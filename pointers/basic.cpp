#include<iostream>
using namespace std;


int main()
{
    int a=10;
    int *p = &a;

    cout<<"output of a: "<<a<<endl;
    cout<<"output of p: "<<p<<endl;
    cout<<"output of &a: "<<&a<<endl;
    cout<<"output of *p: "<<*p<<endl;

    return 0; 
}