#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the size of 1st array: ";
    cin>>m;
    cout<<"Enter the size of 2nd array: ";
    cin>>n;

    vector<int> arr1(m+n);
    vector<int> arr2(n);

    for(int i=0;i<m;i++)
    {
        cout<<"Enter "<<i+1<<" th element of 1st array : ";
        cin>>arr1[i];
    }

    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" th element of 2nd array : ";
        cin>>arr2[i];
    }

    cout<<"1st array is: ";
    for(int i=0;i<m;i++)
    {
        
        cout<<arr1[i]<<" ";
    }

    cout<<endl<<"2nd array is: ";
    for(int i=0;i<n;i++)
    {
        
        cout<<arr1[i]<<" ";
    }

    int left=m-1;
    int right=0;

    while(left>=0 && right<n)
    {
        if(arr1[left]>arr2[right])
        {
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }

        else break;
    }

    sort(arr1.begin(),arr1.begin()+m);
    sort(arr2.begin(),arr2.end());

    for(int k=0;k<n;++k)
    {
        arr1[m+k]=arr2[k];   
    }

    cout<<endl<<"Merged array is:";
    for(int k=0;k<arr1.size();k++)
    {
        cout<<arr1[k]<<" ";
    } 

}