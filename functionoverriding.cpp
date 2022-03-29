#include<iostream>
#include<cstring>
using namespace std;

class bird
{
    public:
        char bname[20];
        char bcolor[20];
        const static int legs = 2;
        const static int wings = 2;

        bird()
        {

        }

        bird(char *bname,char *bcolor)
        {
            strcpy(this->bname,bname);
            strcpy(this->bcolor,bcolor);

        }
        virtual ~bird()
        {
            cout<<"Bird destroyed"<<endl;
        }

        void fly()
        {
            cout<<"Bird flies "<<endl;
        }

};

class flight : public bird
{
    public:
        int fnum;
        char airlines[20];

        flight()
        {

        }

        virtual ~flight()
        {
            cout<<"Flight destroyed"<<endl;
        }
        void fly()      //function overriding
        {
            cout<<"flight flies" <<endl;
        }

        bool takeoff();
        bool landing();
};

int main(int argc,char **argv)
{
    flight f;
    f.fly();
}
