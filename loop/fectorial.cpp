#include<iostream>
using namespace std;


int main()
{
    int number;
    long int factorial=1;
    cout<<"enter number"<<endl;
    cin>>number;

    if (number==0)
        {
            cout<<1;
        }
    else
        {
            for(int i=1; i<=number; i++)
                {
                    factorial *= i;
                }
            cout<<factorial;
        }





    return 0;
}