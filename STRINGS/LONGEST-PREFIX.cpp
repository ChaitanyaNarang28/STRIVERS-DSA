#include<bits/stdc++.h>
using namespace std;

string longest(vector<string>& s)
{
    if(s.empty()) return "";
    string prefix=s[0];

    for(int i=1;i<s.size();i++)
    {
        while(s[i].find(prefix)!=0)
        {
            prefix=prefix.substr(0,prefix.length()-1);
            if(prefix.empty()) return "";

        }
    }
    return prefix;
}

int main()
{
    vector<string> s = {"flower", "flow", "flight"};
    cout << "Longest common prefix: " << longest(s) << endl;
    return 0;
}