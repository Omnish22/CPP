#include<iostream>
using namespace std;


int main()
    {
        int A[5] = {2,3};
        for(auto x: A)
            {
                cout<<x<<endl;
            }

        float B[] = {4,3.2,8,10,'c'};
        for(auto x:B)
            {
                cout<<x<<endl; 
            }

        return 0;
    }