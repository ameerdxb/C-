#include<iostream>

using namespace std;

int main()
{
    int arr[20],n,c=0,sum=0;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    cout<<"\nEnter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sum=((n+1)*(n+2))/2;

    for(int i=0;i<n;i++)
    {
        sum=sum-arr[i];
    }
    cout<<"\nThe missing number from "<<arr[0]<<" to "<<arr[n-1]<<" is "<<sum;


    return 0;
}
