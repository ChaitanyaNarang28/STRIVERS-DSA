// PRINT LINEARLY FROM N TO 1

#include<bits/stdc++.h>
using namespace std;
int cnt;

int print(int n)
{
    if(cnt==n)
    {
        return 1;
    }
    cout<<(n-cnt)<<endl;
    cnt++;
    print(n);
}

int main()
{
    int n;
    cout<<"Enter the no of times to be printed: ";
    cin>>n;
    print(5);
}