#include<iostream>
using namespace std;

int main()
{
    long double num_long_double = 68.75;

    //explicit casting - C style
    double num_double = (double) num_long_double;
    float num_float = (float) num_double;
    long num_long = (long) num_float;

    //explicit casting - Function style
    int num_int = int(num_long);
    short num_short = short(num_int);
    char num_char = char(num_short);
    bool num_bool = bool(num_char);

    //printing variables
    cout<<boolalpha;
    cout<<"num_long_double = "<<num_long_double <<endl;
    cout<<"num-double = "<<num_double <<endl;
    cout<<"num_float = "<<num_float <<endl;
    cout<<"num_long = "<<num_long <<endl;
    cout<<"num_int = "<<num_int <<endl;
    cout<<"num_short = "<<num_short <<endl;
    cout<<"num_char = "<<num_char <<endl;
    cout<<"num_bool = "<<num_bool <<endl;
}
