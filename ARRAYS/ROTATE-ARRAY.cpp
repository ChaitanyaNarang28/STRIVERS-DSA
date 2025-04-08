#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows & columns: ";
    cin >> n;

    // Creating a 2D vector
    vector<vector<int>> arr(n, vector<int>(n));

    // Input elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter " << i + j + 1 << " th element: ";
            cin >> arr[i][j];
        }
    }

    // Display original array
    cout << "\nEntered array is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    // Display rotated matrix
    cout << "\nRotated array is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
