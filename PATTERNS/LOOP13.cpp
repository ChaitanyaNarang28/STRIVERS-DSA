#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k=1;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}