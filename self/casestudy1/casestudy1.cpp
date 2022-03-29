// accepting a file input and displaying it
// word by word

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("fruits.txt");

    if(infile.fail())
    {
        cout<<"Your file does not exist.";
    }
    else
    {
        string s;
        while(infile>>s)
        {
            cout<<s<<endl;
        }
    }
    infile.close();

    return 0;
}
