#include<iostream>
using namespace std;

class bike
{
    public :
        int handle;
        char brand[30];
        char model[50];
        int gears;
        char number[20];

        bike()
        {
            handle=1;
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
}

void bike::showbike()
{
    cout << "Handle is " <<handle<<endl;
    cout << "Brand is " <<brand<<endl;
    cout << "Model is " <<model<<endl;
    cout << "Number is " <<number<<endl;
}

int main()
{
    bike b;
    b.registerbike();
    b.showbike();

    return 0;
}
