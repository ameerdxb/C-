#include<iostream>
#include<cstring>
using namespace std;
//example for operator overloading
class String
{
    public:
        //variable
        char str[20];

    public:
        void accept_string()
        {
            cout<<"\n Enter String        : ";
            cin>>str;
        }
        void display_string()
        {
            cout<<str;
        }
        String operator+(String x) //Concatenating string
        {
            //object
            String s;
            strcat(str,x.str);
            strcpy(s.str,str);
            return s;
        }
};

int main()
{
    String str1, str2, str3; //objects

    str1.accept_string();
    str2.accept_string();
    cout<<"\n----------------------------------------------";
    cout<<"\n\n First String is         :  ";
    str1.display_string();

    cout<<"\n\n Second String is        :  ";
    str2.display_string();
    cout<<"\n-----------------------------------------------";
    str3=str1+str2;
    cout<<"\n\n Concatenated String is  :  ";
    str3.display_string();

    return 0;
}
