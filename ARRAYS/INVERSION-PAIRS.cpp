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
    int cnt=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a1[i]>a1[j])
            cnt++;
        }
    }

    cout<<endl<<"Inversion pairs are: "<<cnt;
}