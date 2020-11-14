#include<iostream>
using namespace std;

int main()
{
    int A[6]={4,8,2,3,7,9};
    int key=23;

    for(int i=0; i<6; i++)
        {
            if(key==A[i])
                {
                    cout<<key<<" is at "<<i<<endl;
                    exit(0); // to stop code
                }
        }
    cout<<"No key found";

    return 0;
}