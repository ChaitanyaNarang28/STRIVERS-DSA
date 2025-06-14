#include<bits/stdc++.h>
using namespace std;

int find(vector<int> arr,int target)
{
    int low=0;
    int high=arr.size()-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;

        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=target && target<=arr[mid]) high=mid-1;
            else low=mid+1;
        }

        else
        {
            if(arr[mid]<=target && target<=arr[high]) low=mid+1;
            else high=mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr={7, 8, 9, 1, 2, 3, 4, 5, 6};
    int target=1;
    int ans=find(arr,target);
    cout<<"The position is : "<<ans;
}