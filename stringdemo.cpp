#include<iostream>
#include<cstring>
using namespace std;

class String
{
    private:
        char *s;        //char type pointer
        int size;
    public:
        String(char *); //constructor
        ~String();      //destructor

        char* show()
        {
            return s;
        }
};
String::String(char *c)
{
    size=strlen(c);
    //dynamic memory allocation by using
    //new keyword and assigning it to pointer
    s=new char[size+1];
    cout<<"allocated memory of size: "<<sizeof(s)<<" bytes to s pointer"<<endl;
    strcpy(s,c);
}
String::~String()
{
    //dynamically releasing memory assigned to a pointer
    delete []s;
    cout<<"de allocated memory for s"<<endl;
}

int main(int argc,char ** argv)
{
    String s1("hello");
    cout<<s1.show()<<endl;

}
