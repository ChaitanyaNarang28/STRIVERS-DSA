#include<bits/stdc++.h>
using namespace std;

int root(int n)
{
    int low=1;
    int high=n;
    int ans=1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if((mid*mid)<=n)
        {
            ans=mid;
            low=mid+1;
        }

        else high=mid-1;
    }
    return ans;
}

int main()
{
    int n=28;
    int sqroot=root(n);
    cout<<"The square root is: "<<sqroot;
}