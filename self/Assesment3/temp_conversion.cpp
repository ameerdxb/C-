#include<iostream>

using namespace std;

class Location
{

    public:
            void show();
            void input();
};

void Location::show()
{
    cout<<"Location : Delhi"<<endl;
    cout<<"Latitude: 28.7041 degree N "<<endl;
    cout<<"Logitude: 77.1025 degree E "<<endl;
}

class Weather : public Location
{
    float temp;

    public: void input();
            void display();
            void CelctoFah();
            void FahtoCelc();

};

void Weather::input()
{

    cout<<"Enter the temperature: ";
    cin>>temp;
}

void Weather::display()
{
    cout<<"Humidity level: 70%"<<endl;
}

void Weather::CelctoFah()
{
    float fah=0;
    fah=(temp*1.8)+32;
    cout<<temp<<" degree Celsius is equivalent to "<<fah<<"F"<<endl;
}

void Weather::FahtoCelc()
{
    float cel=0;
    cel=((temp-32)*5)/9;
    cout<<temp<<"F is equivalent to "<<cel<<" degree Celsius"<<endl;
}

int main()
{
    int ch;
    Location l;
    Weather w1,w2;
    cout<<"Choose an option..";
    cout<<"\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1 : cout<<"\n";
                 w1.input();
                 l.show();
                 w1.display();
                 w1.CelctoFah();
                 break;

        case 2 : cout<<"\n";
                 w2.input();
                 l.show();
                 w2.display();
                 w2.FahtoCelc();
                 break;

        default : break;
    }
}
