#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(i==0 || i==2*(n-1))
            {
                cout<<n;
            }
            else if(j==0 || j==2*(n-1))
            {
                cout<<n;
            }

            else if(i==1 || i==2*(n-1)-1)
            {
                cout<<n-1;
            }
            else if(j==1 || j==2*(n-1)-1)
            {
                cout<<n-1;
            }
            else if(i==2 || i==2*(n-1)-2)
            {
                cout<<n-2;
            }
            else if(j==2 || j==2*(n-1)-2)
            {
                cout<<n-2;
            }
            else
            {
                cout<<n-3;
            }
        }
        cout<<endl;
    }

}