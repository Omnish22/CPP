#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"enter age \n";
    cin>>age;

    if (age>=12 && age<=50){
        cout<<"young";
    }
    else{
        cout<<"not young";
    }


    return 0;
}