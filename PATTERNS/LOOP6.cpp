#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<j+1;
        }
    cout<<"\n";
    }
    
}