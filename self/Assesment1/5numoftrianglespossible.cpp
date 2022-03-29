#include<iostream>
using namespace std;

int main()
{
    int arr[20],n,count=0;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            count++;
        }
    }

    cout<<"Total number of triangles possible: "<<count<<endl;

    return 0;
}
