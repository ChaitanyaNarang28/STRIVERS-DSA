#include<iostream>
using namespace std;

int main()
{
    int i,j,n,start;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=0;i<n+1;i++)
    {
        if(i%2==0)
        {
            start=1;
        }
        
        else
        {
            start=0;
        }

        for(j=0;j<i;j++)
        {
            cout<<start;
            start=1-start;
        }
    cout<<"\n";
    }
    
}