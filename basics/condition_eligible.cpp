#include<iostream>
using namespace std;

int main(){


    int age;
    cout<<"enter your age \n";
    cin>>age;

    if (age<12 || age>50){
        cout<<"not eligible";
    }
    else{
        cout<<"eligible";
    }

    return 0;
}