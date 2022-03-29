#include<iostream>
#include<stdlib.h>
using namespace std;

int division(int a, int b)
{
        if(b==0)
        {
                throw "Division with zero not allowed!";
        }
        return a/b;
}

int main(int argc, char **argv)
{
        cout<<"Welcome to C++ programming"<<endl;
        int a=atoi(argv[1]);
        int b=atoi(argv[2]);

        int result;
        try
        {
                result=division(a,b);
                cout<<result<<endl;
        }catch(const char *ex)
        {
                cout<<ex<<endl;
        }
        cout<<"End of main";
}
