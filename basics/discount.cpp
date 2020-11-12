#include<iostream>
using namespace std;

int main(){

    float  amount,discountAmount;

    cout<<"enter amount"<<endl;
    cin>>amount;

    if (amount>=5000){
        discountAmount = amount - (0.2 * amount);
        cout<<"after discount, amount is "<<discountAmount;
    }
    else{
        if (amount<5000 && amount>=2000){
            discountAmount = amount - (0.1*amount);
            cout<<"after discount, amount is "<<discountAmount;
        }
        else{
            discountAmount = amount - (0.05 * amount);
            cout<<"after discount, amount is "<<discountAmount;
        }
    }


    return 0;
}