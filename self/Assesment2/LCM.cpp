//program to calculate LCM of two numbers
#include<iostream>

using namespace std;

int main()
{
    int a, b, lcm;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    lcm=((a>b)?a:b);

    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            cout<<"\nThe LCM of "<<a<<" and "<<b<<" is: "<<lcm;
            break;
        }
        else
        {
            lcm++;
        }
    }

    return 0;
}
