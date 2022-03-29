#include<iostream>
using namespace std;
//program to covert float type into int type using
//conversion operator static_cast<>
int main()
{
    float num_float = 100.55;

    //using static_cast operator
    int num_int = static_cast<int> (num_float);

    //printing variable
    cout<<"num_float = "<<num_float<<endl;
    cout<<"num_int = "<<num_int<<endl;
}
