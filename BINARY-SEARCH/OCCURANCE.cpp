#include<bits/stdc++.h>
using namespace std;

int lbound(vector<int>& arr,int target)
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

int ubound(vector<int>& arr,int target)
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

vector<int> pairs(vector<int> arr,int target)
{
    int lb=lbound(arr,target);
    if(lb==arr.size() || arr[lb]!=target) return {-1,-1};
    int ub=ubound(arr,target);

    return{lb,ub-1};
}


int main()
{
    vector<int> arr={3,4,13,13,20,40};
    int target=13;

    vector<int> ans=pairs(arr,target);

    cout<<"The pair of occurance are: ";
    for(int i : ans) cout << i << " ";
}