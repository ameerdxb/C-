//A reference is a variable
//that is referred to as another name for an already existing variable. The reference of a variable is created by storing the address of another variable.
//A reference variable can be considered as a constant pointer with automatic indirection. Here, automatic indirection names that the compiler automatically applies the indirection operator(*).

#include<iostream>

using namespace std;

int main()
{
        int i=8;        //variable initialization
        int *p=&i;
        char name[10]="Ameer";
        int &a=i;       //creating a reference variable
        cout<<"The value of 'i' variable is: "<<a<<endl;;
        cout<<"The address of i is: "<<&i<<endl;
        cout<<"The address stored at pointer is: "<<p<<endl;
        cout<<"Value stored in variable i is: "<<i<<endl;
        cout<<"Value stored in variable via pointer: "<<*p<<endl;

        char &firstname=*name;
        cout<<"My name is: "<<name<<endl;
        cout<<"My name has first character via reference: "<<firstname<<endl;

        return 0;
}
