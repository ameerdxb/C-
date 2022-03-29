#include<iostream>

using namespace std;

int main()
{
    int rows,counter=1;
    cout<<"Enter number of rows required: ";
    cin>>rows;

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<counter<<" ";
            counter++;
        }
        cout<<"\n";
    }

    return 0;
}
