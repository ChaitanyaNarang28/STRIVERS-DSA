#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ele;
    int cnt=0;
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
        if(cnt==0)
        {
            ele=arr[i];
            cnt=1;
        }

        else if(ele==arr[i]) cnt++;

        else cnt--;
    }
    cnt=0;

    for(int i=0;i<n;i++)
    {
        if(ele==arr[i]) cnt++;
    }

    if(cnt>n/2) cout<<endl<<ele<<" Occurs more than n/2 times";
    else cout<<endl<<"No number occurs more than n/2 times";
}