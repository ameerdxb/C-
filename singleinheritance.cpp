#include<iostream>
using namespace std;

//define a class
class student
{
    //public access to data members and member functions
    public:
        int student_id;
        int year;
        char name[30];

        void print();
        void year_group();

};

//define print() function by using scope resolution operator ::
void student::print()
{
    cout << student_id << endl;
    cout << name << endl;
    cout << year << endl;
}

//single inheritance
//grad_student inherits from student
class grad_student : public student
{
    public:
        char dept[50];
        char thesis[100];

        void print();

};

void grad_student::print()
{
    cout << student_id << endl;
    cout << name << endl;
    cout << year << endl;
    cout << dept << endl;
    cout << thesis;
}

int main(int argc,char** argv)
{
    grad_student gs;
    cout << "Enter student id: ";
    cin >>gs.student_id;

    cout << "Enter student name: ";
    cin >> gs.name;

    cout << "Enter year: ";
    cin >> gs.year;

    cout << "Enter department: ";
    cin >> gs.dept;

    cout << "Enter thesis: ";
    cin >> gs.thesis;

    gs.print();
}
