#include<iostream>
#include<cmath>

using namespace std;

void octaltodecimal();
void decimaltooctal();

int main()
{
    int ch;

    cout<<"Enter your choice";
    cout<<"\n1. Octal to decimal conversion\n2. Decimal to Octal conversion\n";
    cin>>ch;

    switch(ch)
    {
        case 1 : octaltodecimal();
                break;

        case 2 : decimaltooctal();
                break;

        default : break;
    }

    return 0;
}

void octaltodecimal()
{
    int n, temp, i, rem, deci=0;
    cout<<"\nEnter an octal number: ";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        deci+=rem*pow(8,i++);
        temp=temp/10;
    }
    cout<<"\nDecimal equivalent of "<<n<<" is "<<deci;

}

void decimaltooctal()
{
    int d, temp, oct=0, i=1, rem;
    cout<<"Enter a decimal number: ";
    cin>>d;
    temp=d;
    while(temp!=0)
    {
        rem=temp%8;
        temp=temp/8;
        oct+=(rem*i);
        i*=10;
    }
    cout<<"\nOctal equivalent of "<<d<<" is "<<oct;
}
