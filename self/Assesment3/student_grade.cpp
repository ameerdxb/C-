#include<iostream>
#include<cstring>

using namespace std;

class student
{
    char name[30];
    int rollno;
    float mark1, mark2, mark3, mark4;

    public: void input();
            void display();
            void calculate();

};

void student::input()
{
    cout<<"Enter  student name: ";
    cin.getline(name,30);
    cout<<"\nEnter student roll no: ";
    cin>>rollno;
    cout<<"\nPlease note that maximum marks is 100"<<endl;
    cout<<"\nEnter marks for subject 1 : ";
    cin>>mark1;
    cout<<"\nEnter marks for subject 2 : ";
    cin>>mark2;
    cout<<"\nEnter marks for subject 3 : ";
    cin>>mark3;
    cout<<"\nEnter marks for subject 4 : ";
    cin>>mark4;

}

void student::display()
{
    cout<<"Student Grade report \n "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no: "<<rollno<<endl;
    calculate();
}

void student::calculate()
{
    float totalmarks, percent;
    totalmarks=mark1+mark2+mark3+mark4;
    percent=(totalmarks/400)*100;
    cout<<"Grade: ";
    if(percent>=85)
    {
        cout<<"A";
    }
    else if(percent<85 && percent>=75)
    {
        cout<<"B";
    }
    else if(percent<75 && percent>=50)
    {
        cout<<"C";
    }
    else if(percent<50 && percent>=30)
    {
        cout<<"D";
    }
    else
    {
        cout<<"Fail";
    }
}

int main()
{
    student s;
    s.input();
    s.display();
}
