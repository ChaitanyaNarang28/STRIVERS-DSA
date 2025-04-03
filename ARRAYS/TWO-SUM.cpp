#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,target;
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

    cout<<endl<<"Enter Target: ";
    cin>>target;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<endl<<"Indexes "<<i<<" and "<<j<< "Sum up to "<<target<<endl;
            }
        }
    }
}