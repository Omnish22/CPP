# include<iostream>
using namespace std;

int main()
{
    int n, sum;

    cout<<"enter number upto you want sum\n";
    cin>>n;

    sum = n * (n+1)/2;
    cout<<"sum of "<<n<<" natural number is "<<sum;

    return 0;
}