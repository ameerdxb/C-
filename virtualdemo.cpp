#include<iostream>
#include<cstring>
using namespace std;

class Bird
{
private:
    int legs;
    int wings;
    string birdName;

public:
    //constructor
    Bird()
    {
        legs = 2;
        wings = 2;
        cout<<"Bird constructed"<<endl;
    }
    virtual void fly()
    {
        cout<<"Bird flying with "<<wings<<" wings. "<<endl;
    }
};

class Automobile
{
private:
    int noOfEngines;

public:
    void show();
};

class Flight : public Bird, public Automobile
{
private:
    int flightNumber;
    string airlines;

public:
    //constructor
    Flight()
    {
        flightNumber = 303;
        airlines="Boing";
        cout<<"Flight constructed"<<endl;;
    }
    //redefining the function - function overriding
    void fly()
    {
        cout<<"Flight takes off..";
    }
};

int main()
{
    Bird parrot;
    Flight flight;

    Bird *ptr = &parrot;
    ptr->fly();

    ptr = &flight;
    ptr->fly();
}
