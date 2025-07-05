#include<bits/stdc++.h>
using namespace std;

bool rotated(string s, string g)
{
    if(s.length()!=g.length()) return false;

    string doubles=s+s;
    int len=g.length();

    for(int i=0;i<len;i++)
    {
        if(doubles.substr(i,len)==g)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s, g;
    cout << "Enter the first string: ";
    getline(cin, s);
    cout << "Enter the second string: ";
    getline(cin, g);

    if(rotated(s, g))
        cout << "The second string is a rotation of the first string." << endl;
    else
        cout << "The second string is not a rotation of the first string." << endl;

    return 0;
}