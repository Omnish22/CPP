#include<iostream>
using namespace std;
#include<cmath>

int main()
{
    int a,b,c;
    float root1,root2;

    cout<<"enter a,b,c values ";
    cin>>a>>b>>c;

    root1 =  (-b + sqrt(b*b - 4*a*c))/(2*a);
    root2 =  (-b - sqrt(b*b - 4*a*c))/(2*a);

    cout<<"root1 is  "<<root1<<" root2 is "<<root2;

    return 0;
}