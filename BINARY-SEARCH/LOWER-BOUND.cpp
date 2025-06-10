#include<bits/stdc++.h>
using namespace std;

int lbound(vector<int> arr,int n,int target)
{
    int low=0;
    int high=n-1;
    int ans=n;

    while(low<=high)
    {
       int mid=(low+high)/2; 
       if(arr[mid]>=target) 
       {
        ans=mid;
        high=mid-1;
       }
       else
       {
        low=mid+1;
       }
    }
    return ans;
}

int main()
{
    vector<int> arr={1,4,6,7,8,9,10};
    int target=6;
    int ans=lbound(arr,arr.size(),target);
    cout<<"Lower bound is: "<<arr[ans]<<" and  is located at: "<<ans<< " index.";
}