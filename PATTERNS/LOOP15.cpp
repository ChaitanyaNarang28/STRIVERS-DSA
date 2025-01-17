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
        for(j=n;j>i;j--)
        {
            cout<<char(k)<<" ";
            k++;
        }
        cout<<endl;
    }
}