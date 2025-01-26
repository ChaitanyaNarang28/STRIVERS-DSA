// REVERSE AN ARRAYS

#include<bits/stdc++.h>
using namespace std;

int rev[5],cnt=0;

int reverse(int n[])
{
    if(cnt==5)
    {
        
    }
    rev[cnt]=n[(5-cnt-1)];
    cout<<rev[cnt];
    cnt++;
    reverse(n);

}


int main()
{
    int i;
    int n[5]={1,2,3,4,5};
    reverse(n);
}

