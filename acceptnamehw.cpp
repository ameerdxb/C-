//pre processor directive
#include<iostream>
//namespace for pre-defined object usage
// using namespace std;
//main function
int main(int argc, char** argv)
{
     //declare an array for name
     char name[30];

     //prompt for name
     std::cout<<"Enter your name: ";

     //accept name
     std::cin>>name;

     //object of ostream type
    std::cout<<"Hello World\n"<<name<<std::endl;

    return 0;
}
