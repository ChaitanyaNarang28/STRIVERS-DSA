#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    // Input elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter " << i + j + 1 << " th element: ";
            cin >> arr[i][j];
        }
    }

    // Display original array
    cout << "\nEntered array is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}