#include<iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}

int add(int x,int y,int z)
{
    return x+y+z;
}

int main(int argc,char** argv)
{
    int sum1,sum2;
    sum1=add(5,2);
    sum2=add(2,5,2);
    cout<<"First sum: "<<sum1;
    cout<<"\nSecond sum: "<<sum2;
    return 0;
}
