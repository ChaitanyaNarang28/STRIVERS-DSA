#include<bits/stdc++.h>
using namespace std;

bool find(vector<int>arr , int target)
{
    int low=0;
    int high=arr.size()-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==target) return true;

        if(arr[low]==arr[mid] && arr[mid]==arr[high])
        {
            low++;
            high--;
            continue;
        }
        
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

    return false;
}

int main()
{
    vector<int> arr={2,5,6,0,0,1,2};
    int target=0;

    bool ans=find(arr,target);

    cout<<boolalpha;
    cout<<"The elements presence is: "<<ans;
}