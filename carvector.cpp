#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class owner
{
        private:
                char ownerName[20];
                int numberofcarsowned;
                char carname[20];
        public:
                owner(char *ownerName,int noofcars)
                {
                        strcpy(this->ownerName,ownerName);
                        numberofcarsowned=noofcars;
                }
                void setcarname(char *carname)
                {
                        strcpy(this->carname,carname);
                }
                char* getcarname()
                {
                        return carname;
                }
                char* getowner()
                {
                        return ownerName;
                }
};
class car
{
        //data members
        private:
                char engine[20];
                bool keys;
        public:
                int wheels;
                char brand[20];
                char model[20];
                int steering;
                char number[20];
                int seats;

                //member functions
                //default constructor
                car()
                {
                        steering=1;
                        wheels=4;
                        keys=false;
                        strcpy(engine,"anonymous engine");
                        strcpy(brand,"anonymous brand");
                        strcpy(model,"anonymous model");

                        cout<<brand<<" car object created"<<endl;
                }
                //parameterized constructor
                car(char *brand,const char *engine,bool keys)
                {
                        //assigning class data members with local variables
                        strcpy(this->engine,engine);
                        this->keys=keys;
                        strcpy(this->brand,brand);
                        cout<<brand<<" car created "<<endl;
                }
                car(int seats,char *number)
                {
                        this->seats=seats;
                        strcpy(this->number,number);
                        strcpy(this->brand,"toofan");
                        cout<<brand<<" car created"<<endl;
                }
                //constructor overloading
                car(int steering,int wheels,bool keys,char *engine,char *brand,char *model)
                {
                        this->steering=steering;
                        this->wheels=wheels;
                        this->keys=keys;
                        strcpy(this->engine,engine);
                        strcpy(this->brand,brand);
                        strcpy(this->model,model);
                        cout<<"car object with 5 parameters created"<<endl;
                }

                //destructor
                ~car()
                {
                        cout<<brand<<" car destroyed"<<endl;
                }
                //define member functions
                void start();
                void stop();
};
void car::start()
{
        cout<<"started";
}
void car::stop()
{
        cout<<"stopped!";
}
int main(int argc,char **argv)
{
        //create car class object-two parameterized constructor
        car mycar("Toyota","XYZ engine",true);
        car friendscar(8,"TN20AZ0102");
        //create another car class type object-default constructor is called
        car yourcar;
        owner Owner("Ameer",2);
        Owner.setcarname("BMW");
        cout<<Owner.getowner()<<" has " <<Owner.getcarname()<<endl;



    //Implementing vector example
    vector<car>v1;
    v1.push_back(mycar);
    v1.push_back(yourcar);
    for(vector<car>::iterator itr=v1.begin();itr!=v1.end();++itr)
    {
        cout<<itr->brand<<endl;
    }




} //end of main
