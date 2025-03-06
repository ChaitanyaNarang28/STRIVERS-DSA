#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int n, int arr[]) 
{
    for(int i=0;i<n;i++)
    {
        int key=i;
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() 
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(n, arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
