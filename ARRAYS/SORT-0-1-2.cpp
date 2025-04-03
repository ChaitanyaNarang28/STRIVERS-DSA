#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int c0=0,c1=0,c2=0;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }

    cout<<endl<<"Entered array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    for(i=0;i<n;i++)
    {
        if(arr[i]==0) c0++;
        if(arr[i]==1) c1++;
        if(arr[i]==2) c2++;
    }

    for(i=0;i<c0;i++)
    {
        arr[i]=0;
    }

    for(i=c0;i<c0+c1;i++)
    {
        arr[i]=1;
    }
    for(i=c0+c1;i<n;i++)
    {
        arr[i]=2;
    }

    cout<<endl<<"Sorted array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}