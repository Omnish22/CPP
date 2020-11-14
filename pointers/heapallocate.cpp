#include<iostream>
using namespace std;

int main()
{
    int *p = new int[5];//now p stores address of array generate in heap memory
    p[0] = 12;
    p[1] = 5;
    p[2] = 13;

    cout<<p[2]<<endl;

    delete []p;
    p = nullptr;



    return 0;
}