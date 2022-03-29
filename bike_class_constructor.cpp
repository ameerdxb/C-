#include<iostream>
#include<cstring>
using namespace std;

class bike
{
    public :
        int handle;
        char brand[30];
        char model[50];
        int gears;
        char number[20];

        //default constructor
        bike()
        {
            handle=1;
        }

        //parameterized constructor
        bike(char *model,char *brand,char *number,int gears)
        {
            handle=1;
            strcpy(this->model,model); //this--who called me
            strcpy(this->brand,brand);
            strcpy(this->number,number);
            this->gears=gears;
        }

        //two parameterized constructor
        bike(char *model,char *brand)
        {
            strcpy(this->model,model);
            strcpy(this->brand,brand);
        }

        void registerbike();
        void showbike();
};

void bike::registerbike()
{
    cout << "Enter brand: " <<endl;
    cin >> brand;
    cout << "Enter model: " <<endl;
    cin >> model;
    cout << "Enter number: " <<endl;
    cin >> number;
    cout << "Enter no.of gears: " <<endl;
    cin >> gears;
}

void bike::showbike()
{
    cout << "Handle is " <<handle<<endl;
    cout << "Brand is " <<brand<<endl;
    cout << "Model is " <<model<<endl;
    cout << "Number is " <<number<<endl;
    cout << "Number of gears is " <<gears<<endl;
}

int main()
{
    bike b("Bajaj","Pulsar","KL123456",4);
    b.showbike();

    bike t;
    t.registerbike();
    t.showbike();

    bike dreambike("Honda","Activa");

    return 0;
}
