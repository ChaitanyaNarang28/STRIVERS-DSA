#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k=65;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        
        for(j=0;j<i+1;j++)
        {
            cout<<char(k)<<" ";
            
        }
        cout<<endl;
        k++;
    }
}