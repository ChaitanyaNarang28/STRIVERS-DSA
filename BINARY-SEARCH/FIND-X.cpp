#include<bits/stdc++.h>
using namespace std;

int bsearch(vector <int>& arr, int low , int high , int target)
{
    if(low>high) return -1;
    int mid=(low+high)/2;

    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) return bsearch(arr,low,mid-1,target);
    return bsearch(arr,mid+1,high,target);
}

int search(vector<int>& arr,int target)
{
    return bsearch(arr,0,arr.size()-1,target);
}

int main()
{
    vector<int> arr={1,4,5,7,9,10,15};
    int target=4;
    int ans=search(arr,target);
    cout<<"The index of element is: "<<ans;
    
}