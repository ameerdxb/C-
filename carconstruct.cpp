#include<iostream>
#include<cstring>
using namespace std;
//create class Owner
class Owner
{
    private:
        char ownerName[20];
        int numberofCarsOwned;
        char carname[20];

    public:
        Owner(char *ownername,int noofcars)
        {
            //only parameterized constructor defined for Owner class
            strcpy(ownerName,ownername);
            numberofCarsOwned=noofcars;
        }
        //setter function
        void setcarname(char* carname)
        {
            strcpy(this->carname,carname);
        }
        //getter function
        string getcarname()
        {
            return carname;
        }
        //getter for ownerName
        char* getOwner()
        {
            return ownerName;
        }
};

//create car class with constructors
class Car
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
        int seats;
        char number[15];

        //member functions
        //default constructor
        Car()
        {
            steering=1;
            wheels=4;
            keys=false;
            strcpy(engine,"anonymous engine");
            strcpy(brand,"anonymous brand");
            strcpy(model,"anonymous model");
            cout <<brand<< " Car object created"<<endl;
        }

        //parameterized constructor
        Car(char *brand,const char *engine,bool keys)
        {
            //assigning class data members with local variables
            strcpy(this->engine,engine);
            this->keys=keys;

            strcpy(this->brand,brand);

            cout <<brand<< " car object created with parameters"<<endl;
        }

        //parameterized constructor with type of parameters
        Car(int seats,char *number)
        {
            this->seats=seats;
            strcpy(this->number,number);
            strcpy(this->brand,"Toofan");
            cout <<brand<< " car created" <<endl;
        }

        //constructor overloading by the number of parameters
        Car(int steering,int wheels,bool keys,char *engine,char *brand,char *model)
        {
            this->steering=steering;
            this->wheels=wheels;
            this->keys=keys;
            strcpy(this->engine,engine);
            strcpy(this->brand,brand);
            strcpy(this->model,model);
            cout << "Car object with 5 parameters created"<<endl;
        }

        //destructor
        ~Car()
        {
            cout <<brand<< " Car destroyed!"<<endl;
        }

        //define member functions
        void start();
        void stop();
};

void Car::start()
{
    cout << " Started"<<endl;
}

void Car::stop()
{
    cout << " Stopped"<<endl;
}

int main(int argc, char ** argv)
{
    //create car class object - two parameterized constructor is called
    Car mycar("Toyoto","Toyoto XYX engine",true);

    Car friendscar(8,"TN20AZ0102");

    //create another car class type object- default constructor is called
    Car yourcar;

    //create object of class Owner
    Owner owner("Ameer",1);
    owner.setcarname("BMW");
    cout <<owner.getOwner()<<" has "owner.getcarname()<<endl;



} //end of main
