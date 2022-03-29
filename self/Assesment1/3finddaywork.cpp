#include<iostream>

using namespace std;

int main()
{
    double ram=24, bose=20, days=8, rajwork;
    //work done by each in a single day
    double ramwork=1/ram, bosework=1/bose, x=1/days;

    double result;
    rajwork = x-ramwork-bosework;
    result=1/rajwork;    //need reciprocal
    cout<<"\nThe number of days taken by Raj alone to complete the work is "<<result<< " days";
    return 0;
}
