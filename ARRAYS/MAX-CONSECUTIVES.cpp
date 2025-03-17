#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxi=0,count=0;
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
        if(arr[i]==1)
        {
            count++;
            maxi=max(maxi,count);
        }

        else
        {
            count=0;
        }
    }

    cout<<endl<<"Highest consecutive no's is: "<<maxi;
}