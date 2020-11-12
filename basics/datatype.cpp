#include<iostream>
using namespace std;



enum days  {mon=1,tue,wed,thr=10,fri,sat,sun};

typedef int marks;


int main(){


    days d=mon;
    
    cout<<d<<endl;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thr<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;


    marks m1,m2;

    m1 = 50;
    m2 = 80;


    return 0 ;
}