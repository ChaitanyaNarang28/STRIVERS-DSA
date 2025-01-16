#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        int k=65;
        int m=65+i;
        for(j=n;j>i+1;j--)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            
            cout<<char(k);
            k++;
            
        }
        for(j=0;j<i;j++)
        {
            m--;
            cout<<char(m);
            
            
        }
         cout<<endl;
        }
        
    }
    
