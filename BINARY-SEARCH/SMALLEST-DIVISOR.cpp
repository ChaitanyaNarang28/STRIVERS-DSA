#include<bits/stdc++.h>
using namespace std;

int sums(vector<int>&arr, int mid)
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum=sum+ceil((double)(arr[i])/(double)(mid));
    }
    return sum;
}

int smallestd(vector<int>&arr , int threshold)
{
    int low=1;
    int high=*max(arr.begin(),arr.end());
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(sums(arr,mid)<=threshold) high=mid-1;
        else low=mid+1;
    }
    return low;
}

int main()
{
    vector<int> arr={1,2,5,9};
    int threshold=6;

    int result=smallestd(arr,threshold);
    cout<<"Smallest divisor is: "<<result<<endl;

    return 0;
    
}