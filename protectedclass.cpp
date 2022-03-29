    //program to depict protected multilevel inheriance
#include<iostream>
#include<cstring>

using namespace std;

class Animal
{
    public:
        int legs;
    protected:
        int tail;
    public:

        //constructor
        Animal()
        {
            legs=2;
            tail=1;
            cout<<"Animal created"<<endl;
        }

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

        Ape()
        {
            strcpy(apeName,"Australopithecus");
            cout<<"Ape created"<<endl;
        }
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

        Human()
        {
            hands=2;
            cout<<"Human created"<<endl;
        }
        void talk();
};

void Human::talk()
{
    cout << "Talking for hours.."<<endl;
    cout << "Hey, I have " <<hands<< " hands and " <<legs<< " legs"<<endl;
    cout << "If i were an ape, my name is " <<apeName<<endl;
    cout << "that's all for today"<<endl;
}

class Student
{
    public:
        int reg_id;
        char name[30];
        char course[30];
    protected:
        float fee;
};

class Reciept : public Student
{
    public:
        int rec_num;

        void admit()
        {
            cout<<"Enter reg id: "<<endl;
            cin>>reg_id;
            cout<<"Enter fee: "<<endl;
            cin>>fee;
        }
};

int main(int argc,char** argv)
{
    Human person;
    Student rahul;
    Reciept rahul_receipt;

    rahul_receipt.admit();



    cout << "Enter number of hands: ";
    cin>>person.hands;

    cout << "Enter number of legs: ";
    cin>>person.legs;

  //  cout << "Enter number of tail: ";
  //  cin>>person.tail;

    cout << "Enter ape name: ";
    //cin.ignore();
    //getline(person.apeName,30);
    cin>>person.apeName;

    person.talk();
    return 0;
}
