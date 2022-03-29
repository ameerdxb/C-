#include<iostream>
using namespace std;

class Box
{
    private:
        int length;
    public:
        Box():length(5){}
        friend int printLength(Box);  //friend function
        int getlength()
        {
            return length;
        }
        void setlenght(int length)
        {
            this->length=length;
        }
};

int printLength(Box b)
{
    b.length += 10;
    return b.length;
}

int main()
{
    Box b;
    //cin>>b.length;
    cout<<"length of box: "<<printLength(b)<<endl;
    return 0;

}
