#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }

    if(count==2)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not a Prime";
    }
}