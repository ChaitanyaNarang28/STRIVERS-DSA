#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sell;
    
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
    int buy=arr[0];
    
    for(int i=0;i<n;i++)
    {
        sell=arr[i]-buy;
        maxi=max(sell,maxi);
        if(buy>arr[i]) buy=arr[i];

    }
    cout<<endl<<"The Max Profit is: "<<maxi;

}
