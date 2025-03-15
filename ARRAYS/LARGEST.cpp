#include<bits/stdc++.h>
using namespace std;

int largest(int n,int arr[])
{
    int m=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    return m;
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

    m=largest(n,arr);
    cout<<endl<<"The largest Element is: "<<m;
    
}
