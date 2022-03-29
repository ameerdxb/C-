#include<iostream>
using namespace std;

template<class T>
class Number
{
        private:
                T num;
        public:
                Number(T n):num(n){}
                T getNum()
                {
                        return num;
                }
};
int main()
{
        Number<int> numberInt(8);
        Number<float>numberFloat(3.141);
        cout<<"Integer passed to the object :"<<numberInt.getNum()<<endl;
        cout<<"float passed to the object :"<<numberFloat.getNum()<<endl;

        return 0;
}
