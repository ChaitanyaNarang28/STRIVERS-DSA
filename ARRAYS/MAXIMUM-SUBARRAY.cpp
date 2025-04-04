#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int sum=0;
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

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>maxi) maxi=sum;

        if(sum<0) sum=0;
    }

    cout<<endl<<"The Maximumm sum of Sub-Array is: "<<maxi;
}