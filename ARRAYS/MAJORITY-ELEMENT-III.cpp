#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    vector<int> a1;
    int cnt=1;
    
    cout<<"Enter the size of array: ";
    cin>>n;

    int maxi=n/3;
    
    vector<int> arr(n);

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

    sort(arr.begin(),arr.end());

    for(int i=1;i<=n;i++)
    {
        if(i<n && arr[i]==arr[i-1]) cnt++;

        else
        {
            if(cnt>maxi) a1.push_back(arr[i-1]);
            cnt=1;
        }
    }

    cout<<endl<<"The element having occurence more than n/3 times is: ";

    for(int i=0;i<a1.size();i++)
    {
        cout<<a1[i]<<" ";
    }

}