#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the max no: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter the array: ";
    for(int i=0;i<n-1;i++)
    {
        cout<<"Enter "<<i+1<<" Element: ";
        cin>>arr[i];
    }

    cout<<"Your entered array is: ";
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<endl<<"Element "<<i+1<<" is missing";
            return 1;
        }
    }

}