#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1[5]={1,2,3,4,5};
    int a2[4]={2,3,4,6};

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

    set<int> s;

    for(int i=0;i<5;i++)
    {
        s.insert(a1[i]);
    }

    for(int i=0;i<4;i++)
    {
        s.insert(a2[i]);
    }

    vector<int> arr;
    for(auto it : s)
    {
       arr.push_back(it);
    }
    cout<<endl<<"Union of 2 arrays is: ";
    for(int j=0;j<arr.size();j++)
    {
        cout<<arr[j]<<" ";
    }

}