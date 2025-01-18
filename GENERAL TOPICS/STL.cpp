#include<bits/stdc++.h>
using namespace std;

void Pair()
{
    pair<int,int> p={1,3};
    cout<<"First pair: "<<p.first<<" "<<p.second;

    pair<int,pair<int,int>> p2={1,{2,3}};
    cout<<endl<<"Second pair: "<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second;

    pair<int,int> arr[]={{1,2},{3,4},{4,5}};
    cout<<endl<<"Third pair: "<<arr[0].second<<" "<<arr[1].first;
}

void Vector()
{
    
    cout<<endl<<endl<<"Normal Vector: ";
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    for(int i=0 ; i<v.size();++i)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl<<"Paired Vector: ";
    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(3,4);
    
    for(int i=0 ; i<v1.size();++i)
    {
        cout << "(" << v1[i].first << ", " << v1[i].second << ")";
    }
    

    cout<<endl<<"Vector with values: ";
    vector<int> v2(5,100);
    for(int i=0 ; i<v2.size();++i)
    {
        cout<<v2[i]<<" ";
    }

    cout<<endl<<"Pre-defined Vector: ";
    vector<int> v3(5);
    v3.push_back(1);
    for(int i=0 ; i<v3.size();++i)
    {
        cout<<v3[i]<<" ";
    }

    cout<<endl<<"Copied Vector: ";
    vector<int>v4(v2);
    for(int i=0 ; i<v4.size();++i)
    {
        cout<<v4[i]<<" ";
    }

 }

  void lists()
    {
         cout << endl << endl << "lists: ";
    list<int> ls;

    // Adding elements to the list
    ls.push_back(2);        // Add 2 at the end
    ls.emplace_back(4);     // Add 4 at the end

    ls.push_front(5);       // Add 5 at the front
    ls.emplace_front(0);    // Add 0 at the front (fixed)

    // Printing the list
    for (const auto& elem : ls) {
        cout << elem << " ";  // Print each element
    }
    cout << endl;
    }


 

int main()
{
    Pair();
    Vector();
    lists();
}