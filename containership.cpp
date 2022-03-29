// CPP program to illustrate
// concept of Containership

#include<iostream>
using namespace std;

class Engine
{
    public:
        void showengine()
        {
            cout << "Hello from Engine class\n";
        }
};

//Container class
class Car
{
    //creating object of Engine
    Engine e;

    public:
        //constructor
        Car()
        {
            //calling function of Engine class
            e.showengine();
        }
};

int main()
{
    //creating object of Car
    Car c;
}
