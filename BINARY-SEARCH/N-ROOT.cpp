#include<bits/stdc++.h>
using namespace std;

int root(int number,int n)
{
    int low=1;
    int high=number;

    while(low<=high)
    {
        int mid=(low+high)/2;
        int val=pow(mid,n);

        if(val==number) return mid;

        else if(val<number) low=mid+1;

        else high=mid-1;
    }
    return -1;
}

int main()
{
    int number=69;
    int n=3;
    int nroot=root(number,n);
    cout<<"The nth root is: "<<nroot;
}