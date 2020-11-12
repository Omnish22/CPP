# include<iostream>
using namespace std;

int main(){

    int a = 10, b= 5, i = 5;

    if(a>b && ++i>b){
        cout<<"True";
    }
    cout<<endl<<i;

    return 0;
}