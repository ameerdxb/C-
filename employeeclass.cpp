#include<iostream>
//using cstring header file
#include<cstring>
using namespace std;

//create a class Employee
class Employee
{
    //data members
    private:
        int empid;
        char empname[30];
        float empsal;
    // member functions
    public:
        //setter functions
        void setempid(int eid)
        {
            empid=eid;
        }
        void setempname(char name[])
        {
            strcpy(empname,name);
        }
        void setempsal(float salary)
        {
            empsal=salary;
        }

        //getter functions
        int getempid()
        {
            return empid;
        }
        char * getempname()
        {
            return empname;
        }
        float getempsal()
        {
            return empsal;
        }

};

int main(int argc, char** argv)
{
    Employee e1;
    int eid;
    char ename[30];
    float esal;
    cout << "Enter employee id : ";
    cin >>eid;
    e1.setempid(111);
    cout << "Enter employee name : ";
    //cin>>ename;
    cin.ignore();
    cin.getline(ename,30);
   // cin.getline(ename,30);
    e1.setempname(ename);
    cout << "Enter salary in Rs. : ";
    cin >>esal;
    e1.setempsal(esal);

    cout << "Id: " << e1.getempid() << endl;
    cout << "Name: " << e1.getempname() << endl;
    cout << "Salary: " << e1.getempsal() << endl;

}
