#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,target;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> arr(n);

    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }

    cout<<endl<<"Entered array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;

    sort(arr.begin(),arr.end());
    vector<vector<int>> a1;

    cout<<"Enter the Target: ";
    cin>>target;

    for(i=0;i<n;i++)
    {
        if(i>0 && arr[i]==arr[i-1]) continue;

        for(int j=i+1;i<n;i++)
        {
            if(j!=i+1 && arr[j]==arr[j-1]) continue;
            int k=j+1;
            int l=n-1;

            while(k<l)
            {
                long long sum=arr[i];
                sum+=arr[j];
                sum+=arr[k];
                sum+=arr[l];

                if(sum==target) 
                {
                    vector<int> tmp={arr[i],arr[j],arr[k],arr[l]};
                    a1.push_back(tmp);
                    k++;
                    l--;

                    while(k<l && arr[k]==arr[k-1]) k++;
                    while(k<l && arr[l]==arr[l+1]) l--;
                }

                else if(sum>target) l--;
                else k++;
            }
        }
    }

    cout<<endl<<"4-Sum array is: ";

    for(i=0;i<a1.size();i++)
    {
        for(int j=0;j<a1[i].size();j++)
        {
            cout<<a1[i][j]<<" ";
        }
        cout<<endl;
    }

}