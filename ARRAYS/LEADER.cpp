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

    vector<int> leader;
    int l1=arr[n-1];
    leader.push_back(l1);

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=l1)
        {
            leader.push_back(arr[i]);
            l1= arr[i];
        }
    }
    reverse(leader.begin(),leader.end());

    cout << "\nleaders are: ";
    for(int i = 0; i <leader.size(); i++)
    {
        cout << leader[i] << " ";
    }
}