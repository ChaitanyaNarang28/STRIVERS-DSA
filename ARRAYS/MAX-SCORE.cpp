#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int sums=0;
    int maxi=INT_MIN;
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

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;i++)
        {
            sums=arr[i]+arr[j];
            maxi=max(maxi,sums);
        }
    }

    cout<<endl<<"The Max Score is: "<<maxi;

}