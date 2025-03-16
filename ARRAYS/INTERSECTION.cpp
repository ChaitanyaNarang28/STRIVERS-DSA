#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1[5]={1,2,3,4,5};
    int a2[4]={2,3,4,6};
    int visited[4]={0,0,0,0};

    vector<int> intersection;

    cout<<"First array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<a1[i]<<" ";
    }

    cout<<endl<<"Second array is: ";
    for(int i=0;i<4;i++)
    {
        cout<<a2[i]<<" ";
    }


    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a1[i]==a2[j] && visited[j]==0)
            {
                intersection.push_back(a1[i]);
                visited[j]=1;
                break;
            }

            if(a1[i]<a2[j])
            {
                break;
            }
        }
    }
    cout<<endl<<"The intersection of array is: ";
    for(int i=0;i<intersection.size();i++)
    {
        cout<<intersection[i]<<" ";
    }

}