// simple interest
#include<iostream>
using namespace std;

int main()
{
    int p,r,t,i;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter time period: ";
    cin>>t;

    i=(p*r*t)/100;
    cout<<"Simple interest is: "<<i;
    return 0;
}
