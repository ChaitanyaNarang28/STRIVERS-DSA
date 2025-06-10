#include<bits/stdc++.h>
using namespace std;

int postion(vector<int>& arr,int n,int target)
{
    int low=0;
    int high=n-1;
    int ans=n;

    while(low<high)
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
    vector<int> arr={1,3,5,6};
    int target=2;
    int ans=postion(arr,arr.size(),target);
    cout<<"Position is: "<<ans;

}