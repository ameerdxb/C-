//Program to calculate roots of a quadratic equation
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, r1, r2, discmnt, realp, imagp;

    cout<<"Enter coefficients a, b and c respectively : \n";
    cin>>a>>b>>c;
    discmnt =((b*b)-(4*a*c));
    if(discmnt<0)
    {
        realp= -b/(2*a);
        imagp= sqrt(-discmnt)/(2*a);
        cout<<"\nThe roots are complex and different."<<endl;
        cout<<"Roots are: "<<endl;
        cout<<realp<<"+"<<"i"<<imagp<<" and "<<realp<<"-"<<"i"<<imagp;
    }
    else if(discmnt==0)
    {
        r1=-b/(2*a);
        cout<<"\nThe roots are real and equal.\nRoots: "<<r1<<endl;
    }
    else
    {
        r1=(-b+sqrt(discmnt))/(2*a);
        r2=(-b-sqrt(discmnt))/(2*a);
        cout<<"Roots are real and different. \nRoots: "<<r1<<" and "<<r2;
    }


    return 0;
}
