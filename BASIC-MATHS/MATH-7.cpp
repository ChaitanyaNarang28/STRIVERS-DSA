#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m,j,x=0;
    cout<<"Enter the 1st number: ";
    cin>>n;
    cout<<"Enter the 2nd number: ";
    cin>>m;

    if(n<m)
    {
        j=n;
    }
    else if(m<n)
    {
        j=m;
    }
    else
    {
        cout<<"The HCF is: "<<n;
        exit(1);
    }
    
    for(i=1;i<=j;i++)
    {
        if(n%i==0 && m%i==0)
        {
            x=i;
        }
    }

    cout<<"HCF is: "<<x;
}