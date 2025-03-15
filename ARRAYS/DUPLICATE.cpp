#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
   int n=5;
   int arr[5]={1,2,2,3,5};
   vector <int> updated;

   updated.push_back(arr[0]);
   
   for(int i=1;i<n;i++)
   {
    if(arr[i]!=arr[i-1])
    updated.push_back(arr[i]);
   }

   cout<<"Updated Array is: ";

   for(int i=0;i<updated.size();i++)
   {
    cout<<updated[i]<<" ";
   }
}