#include<iostream>
#include<cstring>
using namespace std;

//base class
class shape
{
    public:
        //data members
        int vertex;
        char name[20];

        //member functions
        //unable to draw a shape
        //default constructor
        shape()
        {
            vertex=0;
            strcpy(name,"Anonymous");
        }
        //unable to draw a shape
       // virtual void draw();  //late binding

       //destructor
       virtual ~shape()
       {
           cout<<"Shape destroyed"<<endl;
       }
       //declaring function -making it a pure virtual function
       virtual void draw()=0;
       void erase()
       {
           cout<<"Shape is Erased"<<endl;
       }
};

//derived class1
class circle : public shape
{
    public:
        float radius;
        //constructor
        circle(float radius)
        {
            this->radius=radius;
        }
        //able to define draw
        void draw()
        {
            cout<<"Drawing circle with radius "<<radius<<endl;
        }
};

//derived class 2
class triangle : public shape
{
    //data members
    private:
        float x,y;
        float base,height;
    public:
        char triangletype[20];
        //member functions

        //constructor
        triangle(float base,float height)
        {
            this->base=base;
            this->height=height;
        }
        //able to draw
        void draw()
        {
            cout<<"A triangle with "<<base<<" base and height "<<height<<" drawn."<<endl;
        }
};

int main(int argc, char **argv)
{
    circle c(2.5);
    c.draw();

    triangle t(5.8,7.9);
    t.draw();

    //for an abstract class- contains at least one pure
    //virtual function, an object cannot be created
    //shape s;
}


