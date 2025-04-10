#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
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

    vector<vector<int>> ans; // Declare ans

    for(int i=0;i<n;i++)
    {
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0) j++;
            else if(sum>0) k--; // Fix this line
            else
            {
                vector<int> tmp={arr[i],arr[j],arr[k]};
                ans.push_back(tmp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
            }
        }
    }

    cout<<endl<<"3 Sum array is: ";
    for(i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
