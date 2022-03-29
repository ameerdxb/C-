    //precision()
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout<<"Before Precision: \n";
    cout<<sqrt(2);
    cout<<"\n"<<3.123423;
    cout<<"\n"<<2.50043;

    cout.precision(3);
    cout<<"\n\nAfter Precision: ";
    cout<<"\n"<<sqrt(2);
    cout<<"\n"<<3.123423;
    cout<<"\n"<<2.50043;

    return 0;
}
