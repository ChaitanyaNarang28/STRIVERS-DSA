#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> a1(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " Element: ";
        cin >> a1[i];
    }

    cout << endl << "Entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }

    sort(a1.begin(), a1.end());

    int repeat = -1, miss = -1;
    for (int i = 1; i < n; i++)
    {
        if (a1[i] == a1[i - 1])
        {
            repeat = a1[i];
        }
        else if (a1[i] > a1[i - 1] + 1)
        {
            miss = a1[i - 1] + 1;
        }
    }

    if (miss == -1)
    {
        if (a1[0] != 1)
            miss = 1;
        else if (a1[n - 1] != n)
            miss = n;
    }

    cout << endl << "Repeating no is: " << repeat << endl;
    cout << "Missing no is: " << miss << endl;

    return 0;
}
