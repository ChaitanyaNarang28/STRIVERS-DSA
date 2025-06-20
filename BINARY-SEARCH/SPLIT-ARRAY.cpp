#include<bits/stdc++.h>
using namespace std;

int large(vector<int>& arr, int mid)
{
    int count=1;
    int currsum=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]+currsum>mid)
        {
            count++;
            currsum=arr[i];
        }
        else currsum+=arr[i];
    }

    return count;
}

int split(vector<int>&arr, int n)
{
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);

    while(low<=high)
    {
        int mid=(low+high)/2;
        int cnt=large(arr,mid);
        if(cnt>n) low=mid+1;
        else high=mid-1;
    }

    return low;
}

int main()
{
    vector<int> arr={10,20,30,40,50};
    int n=3; // Number of subarrays

    int result=split(arr,n);
    cout<<"The minimum largest sum of the split array is: "<<result<<endl;

    return 0;
}
