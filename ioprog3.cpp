#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //initializing pointer with data
    char *str1="C++";
    char *str2="Programming";
    //storing length of strings from pointers
    int a=strlen(str1);
    int n=strlen(str2);

    //printing the required characters from the string
    for(int i=1;i<=n;i++)
    {
        cout.write(str2,i);
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
    {
        cout.write(str2,i);
        cout<<"\n";
    }
    cout.write(str1,a).write(str2,n);
    cout<<"\n";
    cout.write(str1,10);
    cout<<"\n";

    return 0;
}
