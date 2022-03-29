#include<iostream>
using namespace std;
//user defined class
class Bird
{
public:
    //data members
    int legs;
    int wings;
    char color[20];
    //member function definition
    bool setsingingStatus(bool singing)
    {
        singingStatus=singing;
        return singingStatus;
    }

private:
    //not visible to the outside world
    bool singingStatus;

public:
    //constructor is a function that has same name of the class
    //and called automatically at the time of instantiating the class.

    Bird()
    {
        legs=2;
        wings=2;
        //singingStatus=false;
        //color[]="green";
    }
    //member function
    void fly()
    {
        cout<<color<<" Bird has"<<wings<<" wings.";
    }
};

int main(int argc,char** argv)
{
    //declare or define variables
    int count=0;
    char ch;
    //use predefined objects cin and cout

    cout<<"Input text: \n";
    cin.get(ch);
    //loop through till ch not equal to new line character
    while(ch!='\n')
    {
        cout.put(ch);
        count++;
        cin.get(ch);
    }
    cout<<"\Number of characters : "<<count;
    //creating object for Bird class
    Bird parrot;
    //prompt for color
    cout<<"\nEnter color of the bird: ";
    cin>>parrot.color;
    (parrot.setsingingStatus(false)==true)?cout<<"la..ra...laalala...la":cout<<"cannot sing";
    parrot.fly();
    return 0;
}
