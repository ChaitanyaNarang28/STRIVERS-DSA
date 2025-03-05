#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
            }
            
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the no of elements in array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    cout<<"The array is: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    bubble_sort(n,arr);

    cout<<endl<<"Sorted array is: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}