#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> vec{ 0,1,2,3,4 };

    int array[]={0,1,2,3,4};
    //old feature
  /*  for (auto it = begin(vec); it != end(vec); it++)
    {
        // Access element using dereference operator
        cout << *it << " ";
    }*/
    //display vector container object that contains objects of type int
    //new feature
    for (auto num : vec) //ranged for loop
    {
        // no dereference operator
        cout << num << " ";
    }
    cout << "Printing array.."<<endl;
    for(int n : array)
        {

            cout << n <<endl;
        }
}
