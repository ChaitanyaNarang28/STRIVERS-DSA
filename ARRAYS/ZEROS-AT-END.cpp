#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the size of Array: ";
    cin >> n;

    vector<int> arr(n);  // ✅ Fix 1: Use vector instead of int arr[n]

    for(int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " th element: ";
        cin >> arr[i];
    }

    cout << "Entered Array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

   int j=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]!=0)
    {
        swap(arr[i],arr[j]);
        j++;
    }
    
   }

    cout << endl << "Updated Array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

