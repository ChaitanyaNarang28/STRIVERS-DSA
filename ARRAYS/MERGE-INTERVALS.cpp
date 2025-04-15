#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of subarrays: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "The array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

    vector<vector <int>> ans;
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    {
        if (ans.empty() || ans.back()[1] < arr[i][0])
        {
            ans.push_back(arr[i]);
        }

        else
        {
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }

    cout<<endl<<"Merged intervals are: "<<endl;

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}
