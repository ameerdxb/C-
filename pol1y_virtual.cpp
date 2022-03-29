//function overriding
#include<iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout<<"\nBase Display";
    }
    virtual void show()
    {
        cout<<"\nBase Show";
    }
};

class Derived : public Base
{
public:

    //redefining a function is called function overriding
    void display()
    {
        cout<<"\nDerived Display";
    }
    void show()
    {
        cout<<"\nDerived Show";
    }
};

int main()
{
    //pointer for base class
	Base *ptr;
	//create object for base class
	Base b;
	//create object for derived class
	Derived d;

	system("cls");
	//Assign address of base class object to base class pointer
	ptr=&b;
	//calling base class display
	ptr->display();
	//calling base class show
	ptr->show();
	//storing address of derived class object into base class pointer
	ptr=&d;
	//
	ptr->display();
	ptr->show();
	return 0;
}
