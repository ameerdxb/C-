    //program to depict multilevel inheriance
#include<iostream>
#include<cstring>

using namespace std;

class Animal
{
    public:
        int legs;
        int tail;

        void bark();

};

void Animal::bark()
{
    cout << "Barking..." <<endl;
}

class Ape : public Animal
{
    public:
        char apeName[30];
        void climb();
};

void Ape::climb()
{
    cout << "Climbing trees"<<endl;
}

class Human : public Ape
{
    public:
        int hands;
        void talk();
};

void Human::talk()
{
    cout << "Talking for hours.."<<endl;
    cout << "Hey, I have " <<hands<< " hands and " <<legs<< " legs"<<endl;
    cout << "If i were an ape, my name is " <<apeName<<endl;
    cout << "that's all for today"<<endl;
}

int main(int argc,char** argv)
{
    Human person;
    cout << "Enter number of hands: ";
    cin>>person.hands;

    cout << "Enter number of legs: ";
    cin>>person.legs;

    cout << "Enter number of tail: ";
    cin>>person.tail;

    cout << "Enter ape name: ";
   // cin.ignore();
   // getline(cin,person.apeName);
    cin>>person.apeName;

    person.talk();
}
