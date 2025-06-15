#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>& arr,int m,int k,int mid)
{
    int cnt=0;
    int total=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<=mid)
        {
            cnt++;
        }
        else
        {
            total+=(cnt/k);
            cnt=0;
        }
    }
    total+=(cnt/k);

    return total>=m;
}

int mindays(vector<int>& arr,int m,int k)
{
    long long total=m*1LL*k*1LL;
    if(arr.size()<total) return 1;

    int mini=INT_MAX, maxi=INT_MIN;

    for(int i=0;i<arr.size();i++)
    {
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }

    int low=mini,high=maxi;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(possible(arr,m,k,mid)) high=mid-1;
        else low=mid+1;
    }

    return low;
}

int main()
{
    vector<int> arr={1,10,3,10,2};
    int m=3,k=1;

    int minimum=mindays(arr,m,k);
    cout<<"Minimum no of days to form bouqet are: "<<minimum;
}