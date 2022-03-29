#include<iostream>
using namespace std;

int main()
{
    char num_char = 65;

    //implicit casting
    short num_short = num_char;
    int num_int = num_short;
    long num_long = num_int;
    float num_float = num_long;
    double num_double = num_float;
    long double num_long_double = num_double;

    //printing variables
    cout<<"num_char ="<<num_char <<endl;
    cout<<"num_short = "<<num_short <<endl;
    cout<<"num_int = "<<num_int <<endl;
    cout<<"num_long = "<<num_long <<endl;
    cout<<"num_float = "<<num_float <<endl;
    cout<<"num_double = "<<num_double <<endl;
    cout<<"num_long_double "<<num_long_double <<endl;

    cout<<"size of long double: "<<sizeof(num_long_double);
}
