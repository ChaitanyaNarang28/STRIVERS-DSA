#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,xorr=0;
    cout<<"Enter the max no: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" Element: ";
        cin>>arr[i];
    }

    cout<<"Your entered array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++)
    {
        xorr=xorr^arr[i];
    }

    cout<<endl<<"No that appears only 1 time is: "<<xorr;
}