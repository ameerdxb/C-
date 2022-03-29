#include<iostream>
#include<cstring>
using namespace std;

class twowheeler
{
    public:
        //data members
        int wheels;
        char name[20];
        //member functions
        //default constructor
        twowheeler()
        {
           wheels=2;
        }
        //parameterized constructor
        twowheeler(int wheels,char *name)
        {
            this->wheels=wheels;
            strcpy(this->name,name);
        }
};
class bike : public twowheeler
{

    private:
        char engine[20];
        char fuel[20];
    public:
        char bikenum[20];
        int breaks;
        int gears;
        bike()
        {
            breaks=2;
        }
        bike(int wheels,char *name,char *engine,char *fuel,char *bikenum,int breaks,int gears)
        {
            this->wheels=wheels;
            strcpy(this->name,name);
            strcpy(this->engine,engine);
            strcpy(this->fuel,fuel);
            strcpy(this->bikenum,bikenum);
            this->breaks=breaks;
            this->gears=gears;
        }
        void showbike();
};

void bike::showbike()
{
    cout<<"Bike name is: "<<name<<endl;
    cout<<"It has "<<wheels<<" wheels"<<endl;
    cout<<"it's Engine is: "<<engine<<endl;
    cout<<"Fuel is: "<<fuel<<endl;
    cout<<"Bike number is: "<<name<<endl;
    cout<<"It has "<<breaks<<" breaks"<<endl;
    cout<<"It has "<<gears<<" gears"<<endl;
}

int main(int argc,char ** argv)
{
    twowheeler mybike(2,"Bajaj");
    cout<<"The number of wheels of a twowheeler: "<<mybike.wheels<<endl;
    cout<<"My bike name: "<<mybike.name<<endl;

    bike yourbike(2,"Splender","honda engine","petrol","AP39KQ9733",2,4);
    yourbike.showbike();

}
