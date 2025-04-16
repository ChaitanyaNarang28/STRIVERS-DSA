#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " Element: ";
        cin >> arr[i];
    }

    cout << endl << "Entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int maxp=arr[0];
    int minp=arr[0];
    int maxi=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<0) swap(maxp,minp);

        maxp=max(arr[i],(arr[i]*maxp));
        minp=min(arr[i],(arr[i]*minp));
        maxi=max(maxi,maxp);
    }

    cout<<endl<<"The maximum product of subarray is: "<<maxi;
}
