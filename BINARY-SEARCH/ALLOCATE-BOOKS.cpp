#include<bits/stdc++.h>
using namespace std;

int students(vector<int>& arr, int mid)
{
    int pages=0,stud=1;

    for(int i=0;i<arr.size();i++)
    {
        if(pages+arr[i]<=mid)
        {
            pages=arr[i];
            
        }
        else{
            stud++;
            pages=arr[i];
        }
    }
    return stud;
}

int allocate(vector<int>&arr, int m)
{
    if(m>arr.size()) return -1; 
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);

    while(low<=high)
    {
        int mid=(low+high)/2;
        int stud=students(arr,mid);

        if(stud>m)
        {
            low=mid+1;
        }
        else high=mid-1;

    }

    return low;
}

int main()
{

    vector<int> arr={12,34,67,90};
    int m=2; // Number of students

    int result=allocate(arr,m);
    cout<<"The minimum number of pages allocated to a student is: "<<result<<endl;

    return 0;
}