    // getline and write functions
#include<iostream>
using namespace std;

int main()
{
    int size=30;
    char name[30];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"\nYour name : "<<name;
    cout<<"\nEnter your name again : ";
    cin.ignore();
    cin.getline(name,30);
    cout<<"\nYour name now: "<<name<<"\n";

    cout<<"\nEnter another name: ";
    cin.getline(name,30);
    cout<<"\nNew name: "<<name<<"\n";
    return 0;
}
