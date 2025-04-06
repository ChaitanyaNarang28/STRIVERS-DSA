#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int pos=0;
    int neg=1;
    vector<int> a1;
    vector<int> a2;

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
        if(arr[i]>0) a1.push_back(arr[i]);

        else a2.push_back(arr[i]);
    }

    if(a1.size()>a2.size())
    {
        for(i=0;i<a2.size();i++)
        {
            arr[i*2]=a1[i];
            arr[(i*2)+1]=a2[i];
        }
        int index=a2.size()*2;
        for(i=a2.size();i<a1.size();i++)
        {
            arr[index]=a1[i];
            index++;
        }
    }

    if(a2.size()>a1.size())
    {
        for(i=0;i<a1.size();i++)
        {
            arr[i*2]=a1[i];
            arr[(i*2)+1]=a2[i];
        }
        int index=a1.size()*2;
        for(i=a1.size();i<a2.size();i++)
        {
            arr[index]=a2[i];
            index++;
        }
    }

    cout<<endl<<"Rearranged array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}