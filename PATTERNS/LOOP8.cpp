#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k;
    cout<<"Enter no of rows:";
    cin>>n;
    
    for(i=n;i>0;i--)
    {
            for(j=0;j<n-i;j++)
            {
                cout<<" ";
            }
            for(j=0;j<2*i-1;j++)
            {
                cout<<"*";
            }
            for(j=0;j<n-i;j++)
            {
                cout<<" ";
            }
    cout<<"\n";
    }
    
}