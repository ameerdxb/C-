#include<iostream>
#include<cstring>
using namespace std;

//program to show multiple inheritance

class Bird
{
    public:
        int legs;
        int wings;

        void fly();
        void walk();
};

void Bird::walk()
{
    cout << "Walking with"<<legs<< " legs.";
}

void Bird::fly()
{
    cout << " flying with "<<wings<< " wings.";
}

class Automobile
{
    public:
        int engine;

        void start();
        void stop();

};

void Automobile::start()
{
    cout << " starting ...engine " <<engine-1;
   // system("read -p \"Press a key to start engine \"");
    cout << " starting engine " <<engine;
}

void Automobile::stop()
{
    cout << " stopping ..... " <<engine;
    cout << " stopping engine " <<engine-1;
}

class Flight : public Automobile, public Bird
{
    public:
        int flightNumber;
        char airlines[50];

        void takeoff();
        bool landing();
};

void Flight::takeoff()
{
    cout <<airlines<< " airlines flight " <<flightNumber<< " take off ";
}

bool Flight::landing()
{
    cout <<flightNumber<< " landed safely " <<endl;
    return true;
}

int main(int argc,char ** argv)
{
    Flight f;

    cout << "Enter number of legs: ";
    cin >> f.legs;

    cout << "Enter number of wings: ";
    cin >> f.wings;

    cout << "Enter number of engines: ";
    cin >> f.engine;

    cout << "Enter flight number: ";
    cin >> f.flightNumber;

    cout << "Enter airlines: ";
    cin.ignore();
    cin.getline(f.airlines,50);
   //getline(cin,f.airlines);

    f.start();
    f.takeoff();
    f.fly();
    f.stop();
    bool landingstatus=f.landing();
    if(landingstatus)
    {
        cout << "landing status is true";
    }

}
