#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;

    while(n>0)
    {
        count=count+1;
        n=n/10;
    }
    cout<<"Total no of digits are: "<<count;
}
