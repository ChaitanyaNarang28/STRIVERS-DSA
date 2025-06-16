#include<bits/stdc++.h>
using namespace std;

int day(vector<int>& arr,int mid)
{
    int tdays=1;
    int load=0;
    
    for(int i=0;i<arr.size();i++)
    {
        if((load+arr[i]>mid))
        {
            tdays++;
            load=arr[i];
        }

        else load+=arr[i];
    }
    return tdays;
}

int ship(vector<int>& arr, int days)
{
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(day(arr,mid)<=days) high=mid-1;
        else low=mid+1;
    }
    return low;
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int days=5;

    int result=ship(arr,days);
    cout<<"Minimum capacity to ship within "<<days<<" days is: "<<result<<endl;

    return 0;
}

