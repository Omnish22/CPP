#include<iostream>
using namespace std;

int main()
{
    int num, reversenum=0;
    int lastnum;

    cout<<"enter any number";
    cin>>num;

    while(num>0)
        {
        
            lastnum=num%10;
            num = num/10;

            reversenum = reversenum*10 + lastnum;
            
        }

    cout<<reversenum;

    return 0;
}