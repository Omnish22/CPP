#include<iostream>
using namespace std;


int main()
{
    int A[2][3];
    cout<<"enter numbers of array"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"values of array are"<<endl;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }

    return 0;
}