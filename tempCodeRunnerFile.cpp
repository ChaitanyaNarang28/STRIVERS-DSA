#include<bits/stdc++.h>
using namespace std;

int slargest(int n, int arr[])
{
    int m=arr[0];
    int s=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
        if(arr[i]>s && arr[i]<m)
        {
            s=arr[i];
        }
        
    }
    return s;
}

int main()
{
    int n,m;
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

    m=slargest(n,arr);
    cout<<endl<<"The Second largest Element is: "<<m;
}