#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k;
    cout<<"Enter no of rows:";
    cin>>n;
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";
        }
       cout<<"\n"; 
    }
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";
        }
       cout<<"\n"; 
    }

}