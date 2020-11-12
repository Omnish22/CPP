#include<iostream>
using namespace std;


int main()
    {

        int A[] = {4,8,12,29,2,9,3,21,3};
        int sum = 0;

        for(int i=0; i<9; i++)
            {
                sum = sum + A[i];
            }       
        cout<<sum;


        return 0;
    }