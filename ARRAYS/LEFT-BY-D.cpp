#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,rotate;
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

    cout<<endl<<"Enter the no of times rotations to be done:";
    cin>>d;
    rotate=d%n;

    while(rotate>0)
    {
        for(int i=0;i<n-1;i++)
        {
        swap(arr[i],arr[i+1]);
        }
        rotate--;
    }

    

    cout<<endl<<"Updated  Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
