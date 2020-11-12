#include<iostream>
using namespace std;


int main()
    {
        int A[] = {2,8,4,11,3,7,12,4,7,32,15,20};
        int n = 12;

        int max = A[0];
        for(int i=0; i<n; i++)
            {
                if(A[i]>max)
                    {
                        max = A[i];
                    }
            }
        cout<<max;



        return 0;
    }