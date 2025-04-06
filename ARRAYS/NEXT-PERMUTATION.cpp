#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

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

    int ind = -1;

    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }

    if(ind == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        for(int i = n - 1; i > ind; i--)
        {
            if(arr[i] > arr[ind])
            {
                swap(arr[i], arr[ind]);
                break;
            }
        }

        reverse(arr.begin() + ind + 1, arr.end());
    }

    cout << "\nNext permutation is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
