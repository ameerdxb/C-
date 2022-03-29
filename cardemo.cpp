#include<iostream>
#include<cstring>
using namespace std;
//base class
class car
{
    public:
        int carNumber;
        int seats;
        char carName[20];

        void showcar()
        {
            cout<<"Car name: "<<carName;
            cout<<carNumber<<endl;
            cout<<"Number of seats: "<<seats;
        }
};
//derived class
class racecar : public car
{
    public:
        int powersteering;

        void showracecar()
        {
            cout<<"Car name: "<<carName<<endl;
            cout<<carNumber<<endl;
            cout<<"Number of seats: "<<seats;
        }
};

int main(int argc,char **argv)
{
    //create pointer for base class and store object of derived class

    char reply;
    car *carptr
    carptr=new racecar;
    //racecar *p=carptr;

    cout<<"Enter Car Name: ";
    cin>>carptr->carName;
    cout<<"Enter number of seats: ";
    cin>>carptr->seats;
    cout<<"Enter Car Number: ";
    cin>>carptr->carNumber;

    cout<<"Does this car have power steering?\n";
    cin>>reply;
    if(reply=='y' || reply=='Y')
    {
        carptr->powersteering=1;
        cout<<"The car is a Race car"<<endl;
    }else
    {
        carptr->powersteering=0;
    }
    //deallocate memory for the pointer to release memory for the object

    delete carptr;
    cout<<"Car object deleted from memory"<<endl;
}
