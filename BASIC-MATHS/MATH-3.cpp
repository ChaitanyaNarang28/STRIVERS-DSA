#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,r,m;
    cout<<"Enter the number: ";
    cin>>n;
    m=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        if(n>=10)
        {
            sum=sum*10;
        }
        
        n=n/10;
    }
    // cout<<"Reverse: "<<sum<<endl<<m;

    if(sum==m)
    {
        cout<<"The number is Palindrome";
    }
    else
    {
        cout<<"Not a Palindrom";
    }
}



