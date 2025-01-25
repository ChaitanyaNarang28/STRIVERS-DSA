// PRINT SUM OF FIRST N

#include<bits/stdc++.h>
using namespace std;
int print(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+print(n-1);
}

int main()
{
    int n;
    cout<<"Enter the no till which sum is to be printed: ";
    cin>>n;
    cout<<"The sum is: "<<print(n);
}