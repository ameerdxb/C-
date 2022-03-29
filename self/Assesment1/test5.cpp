#include<iostream>

using namespace std;

int findNumberOfTriangles(int arr[], int n)
{

    int count = 0;


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            {

            for (int k = j + 1; k < n; k++)

                // Sum of two sides is greater
                // than the third
                if (
                    arr[i] + arr[j] > arr[k]
                    && arr[i] + arr[k] > arr[j]
                    && arr[k] + arr[j] > arr[i])
                    count++;
            }
    }
    return count;
}

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

    cout<< "Total number of triangles possible: "<< findNumberOfTriangles(arr, n);

    return 0;
}
