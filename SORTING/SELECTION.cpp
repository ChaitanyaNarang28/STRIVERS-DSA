#include<bits/stdc++.h>
using namespace std;


void selection_sort(int n,int arr[])
{
    
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
           if(arr[j]<arr[min])
            {
                min=j;
                
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main()
{
    int n;
    cout<<"Enter the no of elements in array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    cout<<"The array is: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    selection_sort(n,arr);

    cout<<endl<<"Sorted array is: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    
}