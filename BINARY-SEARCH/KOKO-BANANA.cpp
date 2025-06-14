#include<bits/stdc++.h>
using namespace std;

int fmaxi(vector<int>& arr)
{
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int thours(vector<int>& arr, int mid)
{
    int thrs=0;
    
    for(int i=0;i<arr.size();i++)
    {
        thrs+=ceil(arr[i]/mid);
    }
    return thrs;
}

int mintime(vector<int>& arr, int hrs)
{
    int low=1;
    int  high=fmaxi(arr);

    while(low<=high)
    {
        int mid=(low+high)/2;
        int totalhrs=thours(arr,mid);

        if(totalhrs<=mid) high=mid-1;
        else low=mid+1;
    }

    return low;
}

int main()
{
    vector<int> arr={3,6,7,11};
    int hrs=8;
    int ans=mintime(arr,hrs);
    cout<<"Minimum time required is: "<<ans;
}