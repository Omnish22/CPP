# include<iostream>
using namespace std;

int main()
{
    int num, result,breaker;

    cout<<"enter number"<<endl;
    cin>>num;
    cout<<"upto what want multiplication"<<endl;
    cin>>breaker;

    for(int i=1; i<=breaker; i++)
        {
            cout<<num<<" X "<<i<<" = "<<num*i;
            cout<<endl;
        }

    return 0;
}