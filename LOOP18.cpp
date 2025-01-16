#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        int k=69;
        k=k-i;
        for(j=0;j<i+1;j++)
        {
            cout<<char(k)<<" ";
            k++;
        }
        cout<<endl;
    }
}