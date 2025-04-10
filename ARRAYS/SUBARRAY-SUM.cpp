#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

   int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
    }

    cout << "\nEntered array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int k,total=0;
    cout<<endl<<"Enter the sum to be checked: ";
    cin>>k;

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum==k)
            {
                total++;
            }
        }
    }

    cout<<endl<<"Total no of subarrays is: "<<total;
    
}