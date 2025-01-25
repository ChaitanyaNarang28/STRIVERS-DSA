// PRINT NAME 5 TIMES

#include<bits/stdc++.h>
using namespace std;

int cnt=0;

int name(int n,string input)
{
    if(cnt==n)
    {
        return 1;
    }
    cout<<input<<endl;
    cnt++;
    name(n,input);
}
int main()
{
    int n;
    string input;
    cout<<"Enter Name: ";
    cin>>input;
    cout<<"Enter the times name to be printed: ";
    cin>>n;
    name(n,input);
}
