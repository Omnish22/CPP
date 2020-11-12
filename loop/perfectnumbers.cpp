#include<iostream>
using namespace std;

int main()
{
    int num=8;
    int sum=0;

    for(int i=1; i<=num; i++)
        {
            if(num%i==0)
                {
                    sum = sum+i;
                }
        }
        
        if(2*num == sum)
            {
                cout<<"number is perfect"<<endl;
            }
        else
        {
            cout<<"not perfect numbers"<<endl;
        }
        


    return 0;
}