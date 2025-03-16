#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,elem,flag=0;
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

    cout<<endl<<"Enter the element to be found: ";
    cin>>elem;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==elem)
        {
            cout<<"Element "<<elem<<" found at: "<<i+1<<" Place";
            flag=1;
            return 0;
        }
    }  
    
    if(flag==0)
    {
        cout<<"Element not present in the list !!!";
    }

}