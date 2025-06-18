#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>&arr, int mid, int cows)
{
    int cnt=1, last=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]-last>=mid)
        {
            cnt++;
            last=arr[i];
        }

        if(cnt>=cows) return true;
    }
    return false;
}

int aggcows(vector<int>& arr,int cows)
{
    sort(arr.begin(),arr.end());

    int low=1;
    int n=arr.size();
    int high=arr[n-1]-arr[0];
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(possible(arr,mid,cows)==true)
        {
            low=mid+1;
        }
        else high=mid-1;
    }

    return high;

}

int main()
{
    vector<int> arr={0,3,4,7,10,9};
    int cows=4;
    int result=aggcows(arr,cows);
    cout<<"The largest minimum distance between cows is: "<<result<<endl;

}

