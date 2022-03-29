#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual void draw()
        {
            cout << "drawing.." <<endl;
        }
};

class Rectangle : public Shape
{
    public:
        void draw()
        {
            cout << "drawing rectangle.." <<endl;
        }
};

class Circle : public Shape
{
    public:
        void draw()
        {
            cout << "drawing circle.." <<endl;
        }
};

int main()
{
    Shape *s;       //base class pointer
    Shape sh;       //base class object
    Rectangle rec;
    Circle cir;

    s=&sh;
    s->draw();
    s=&rec;
    s->draw();
    s=&cir;
    s->draw();

}
