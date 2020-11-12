# include<iostream>
# include<math.h>
using namespace std;


int main(){

    int a,b,c;
    float r1,r2;

    cout<<"enter coefficients of equation"<<endl;
    cin>>a>>b>>c;
    cout<<endl<<a<<"X^2 + "<<b<<"X + "<<c<<endl;

    int d = (b*b - (4*a*c));
    
    if (d==0){
        cout<<"roots are real and equal"<<endl;
        r1 = -b/(2*a);
        cout<<"r1 = r2 = "<<r1<<endl;
    }
    else if(d>0){
        cout<<"roots are equal and distinct"<<endl;
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        cout<<"r1 is "<<r1<<endl;
        cout<<"r2 is "<<r2<<endl;
    }
        else{
            cout<<"roots are IMAGEINARY!!!"<<endl;
        }
    



    return 0;
}