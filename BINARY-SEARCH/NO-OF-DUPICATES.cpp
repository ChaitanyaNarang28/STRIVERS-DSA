#include<bits/stdc++.h>
using namespace std;

int lbound(vector<int> arr, int target)
{
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return ans;
}

int ubound(vector<int> arr, int target)
{
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>target)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return ans;
}

int duplicates(vector<int> arr,int target)
{
    int lb=lbound(arr,target);
    if(lb==arr.size() || arr[lb]!=target) return 0;

    int ub=ubound(arr,target);
    int ans=ub-lb;

    return ans;
}

int main()
{
    vector<int> arr={2, 4, 6, 8, 8, 8, 11, 13};
    int target=8;
    int ans=duplicates(arr,target);
    cout<<"The duplicates are: "<<ans;
}