#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<j+1;
        }
        for(j=0;j<2*(n-i-1);j++)
        {
            cout<<"*";
        }
        int k=i+1;
        for(j=0;j<i+1;j++)
        {
            cout<<k;
            k--;
            
        }
        cout<<"\n";
    }
    
}