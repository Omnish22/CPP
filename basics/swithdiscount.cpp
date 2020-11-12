#include<iostream>
using namespace std;

int main()
{
    float amount, discount=0.0;
    cout<<"enter your amount\n";
    cin>>amount;

    if (amount>=500)
        {
            // discount = amount*20/100;
            discount = (20.0/100) * amount;
        }
    else if(amount>=100 && amount<500)
        {
            discount = amount*10/100;
        }
    
    cout<<"Your Amount is "<<amount<<endl;
    cout<<"You got discount "<<discount<<endl;
    cout<<"Your Net bill is "<<amount - discount<<endl;


    return 0;
}