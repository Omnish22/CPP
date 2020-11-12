#include<iostream>
using namespace std;

int main(){

    char x = 127;
    ++x;
    ++x;
    x+=4;
    cout<<(int) x<<endl;
    

    cout<<"-----------------------"<<endl;

    int y = INT32_MAX;
    ++y;
    // ++y;
    cout<<y<<endl;

    return 0;

}