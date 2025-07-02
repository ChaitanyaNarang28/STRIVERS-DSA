#include<bits/stdc++.h>
using namespace std;

string remove(string s)
{
    string result="";
    int depth=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            if(depth>0)
            {
                result+='(';
            }
            depth++;
        }

        else
        {
            depth--;
            if(depth>0)
            {
                result+=")";
            }
        }
    }
    return result;
}

int main()
{
    string s;
    cout << "Enter a string with parentheses: ";
    getline(cin, s);

    string result = remove(s);
    cout << "String after removing parentheses: " << result << endl;

    return 0;
}