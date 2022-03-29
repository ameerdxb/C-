//program to illustrate calculator functions
#include<iostream>
using namespace std;

template<class T>

class Calculator
{
        private:
                T num1,num2;
        public:
                Calculator(T n1, T n2)
                {
                        num1=n1;
                        num2=n2;
                }
                //define display results function
                void display()
                {
                        cout<<"Numbers:" <<num1 <<"and " << num2<<"."<<endl;
                        cout<<num1<< " + "<< num2<< " = "<<add()<<endl;
                        cout<<num1<< " - "<<num2<<" = "<<subtract()<<endl;
                        cout<<num1<<" * "<<num2<<" = "<<multiply()<<endl;
                        cout<<num1<<" / "<<num2<<" = "<<divide()<<endl;
                }
                //defining arithmetic functions
                T add() { return num1+num2;}
                T subtract() { return num1-num2;}
                T multiply(){ return num1 *num2;}
                T divide() { return num1/num2;}
};
int main()
{
        Calculator<int>intCalc(2,1);
        Calculator<float>floatCalc(2.4,1.2);

        cout<<"Int result:"<<endl;
        intCalc.display();
        cout<<endl<<"Float result:"<<endl;
        floatCalc.display();
        return 0;
}
