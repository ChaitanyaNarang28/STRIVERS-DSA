#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" th element: ";
        cin>>arr[i];
    }

    cout<<"Entered Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i+1]<arr[i])
        {
            cout<<endl<<"Not sorted";
            return 0;
        }
        else
        {
            flag=1;
        }
        
    }
    if(flag==1)
    {
        cout<<"Sorted array:";
    }
}