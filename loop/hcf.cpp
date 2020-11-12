#include<iostream>
using namespace std;


int main()
    {
        int num1,num2,hcf;
        cout<<"enter two numbers"<<endl;
        cin>>num1>>num2;

        while(num1!=num2)
            {

                if(num1>num2)
                    {
                        num1 = num1-num2;
                    }
                else if(num2>num1)
                {
                        num2 = num2 - num1;
                }
                

            }
        cout<<"hcf is "<<num1;

        return 0;
    }