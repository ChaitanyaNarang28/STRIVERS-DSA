#include<bits/stdc++.h>
using namespace std;

int lbound(vector<int>&arr,int n , int x)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int max1(vector<vector<int>>&arr, int n,int m)
{
    int cnt_max=0;
    int idx=-1;
    for(int i=0;i<n;i++)
    {
        int cnt=m-lbound(arr[i],m,1);;
        if(cnt>cnt_max)
        {
            cnt_max=cnt;
            idx=i;
        }
    }
    return idx;
}

int main()
{
    vector<vector<int>> arr = {
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 0, 0},
        {1, 1, 1, 1}
    };
    int n = arr.size();
    int m = arr[0].size();

    int result = max1(arr, n, m);
    cout << "Row with maximum number of 1s is: " << result << endl;

    return 0;
}