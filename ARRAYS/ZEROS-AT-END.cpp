#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,sum=0;
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

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i;j<(n-sum-1);j++)
            {
                swap(arr[j],arr[j+1]);
            }
            sum=sum+1;
        }
    }


    cout<<endl<<"Updated  Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
