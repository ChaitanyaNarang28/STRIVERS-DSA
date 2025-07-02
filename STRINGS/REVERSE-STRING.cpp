#include<bits/stdc++.h> 
using namespace std;

string reverse(string s)
{
    int low=0;
    int high=s.length();

    string temp="";
    string ans="";

    while(low<=high)
    {
        if(s[low]!=' ') temp+=s[low];
        else if(temp!="")
        {
            if(ans!="") ans=" "+temp+ans;
            else ans=temp;
            temp="";
        }
        low++;
    }
    if(temp!="")
    {
        if(ans!="") ans=" "+temp+ans;
        else ans=temp;
    }
    return ans;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = reverse(s);
    cout << "Reversed string: " << result << endl;

    return 0;
}