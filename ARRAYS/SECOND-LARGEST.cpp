#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
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

    int m=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>m)
        {
            s=m;
            m=arr[i];
        }
        else
        {
            s=arr[0];
        }
    }
    cout<<endl<<s;
}
