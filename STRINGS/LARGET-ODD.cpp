#include<bits/stdc++.h>
using namespace std;

string ans(string s)
{
    for(int i=s.length()-1;i>=0;i--)
    {
        if((s[i]-'0')%2!=0)
        {
            return s.substr(0,i+1);
        }
    }
    return "";
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = ans(s);
    cout << "Resulting string with highest odd digits: " << result << endl;

   
}
