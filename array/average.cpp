#include<iostream>
using namespace std;

int main()
{
    int n;
    float average,sum=0.0;

    cout<<"enter the total numbers"<<endl;
    cin>>n;

    int array[n];

    

    for(int i=0; i<n; i++)
    {
        cout<<endl<<"enter number "<<i+1<<" : ";
        float value;
        cin>>value;
        array[i] = value;
    }

    for(int i=0; i<n; i++)
    {
        sum = sum + array[i];
    }
    average = sum/n;
    cout<<endl<<"average is "<<average<<endl;

    return 0;
}