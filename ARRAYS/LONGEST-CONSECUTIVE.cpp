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

    sort(arr.begin(),arr.end());
    if(n==0) return 0;
    int cnt=0;
    int length=1;
    int small=INT_MIN;

    for(i=0;i<n;i++)
    {
        if(arr[i]-1==small)
        {
            cnt++;
            small=arr[i];
        }

        else if(arr[i]!=small)
        {
            small=arr[i];
            cnt=1;
        }

        length=max(length,cnt)
    }

    cout<<endl<<"The longest consequent sequence is: "<<length
}