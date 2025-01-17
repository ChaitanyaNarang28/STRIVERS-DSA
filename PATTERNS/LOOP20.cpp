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
            cout<<"*";
        }

        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }

        
        cout<<endl;
    }

    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            cout<<"*";
        }

        for(j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        for(j=n-1;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}