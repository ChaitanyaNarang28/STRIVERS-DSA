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

    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n-1;i++)
    
        s2=s2+arr[i];
        int mis=sum-s2;

        cout<<"Missing Number is : "<<mis;
    
}