#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
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
    int s=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }

    cout<<endl<<"Largest element is: "<<m;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>s && arr[i]!=m)
        {
            s=arr[i];
        }
    }
    cout<<endl<<"Smallest no is: "<<s;
}
