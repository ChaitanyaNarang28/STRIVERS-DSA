// PRINT LINEARLY FROM 1 TO N

#include<bits/stdc++.h>
using namespace std;
int cnt=0;

int print(int n)
{
    if(cnt==n)
    {
        return 1;
    }
    cout<<cnt+1<<endl;
    cnt++;
    print(n);
}

int main()
{
    int n;
    cout<<"Enter the no of times to be printed: ";
    cin>>n;
    print(n);
}