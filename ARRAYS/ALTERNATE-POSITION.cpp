#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int pos=0;
    int neg=1;
    vector<int> ans(n);
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
        if(arr[i]>0)
        {
            ans[pos]=arr[i];
            pos=pos+2;
        }

        else
        {
            ans[neg]=arr[i];
            neg=neg+2;
        }
    }

    cout<<endl<<"Rearranged array is: ";
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}