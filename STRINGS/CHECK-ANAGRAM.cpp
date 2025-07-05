#include<bits/stdc++.h>
using namespace std;

bool anagram(string s, string t)
{
    if(s.length()!=t.length()) return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return s==t;
}

int main()
{
    string s, t;
    cout << "Enter the first string: ";
    getline(cin, s);
    cout << "Enter the second string: ";
    getline(cin, t);

    if(anagram(s, t))
        cout << "The two strings are anagrams." << endl;
    else
        cout << "The two strings are not anagrams." << endl;

    return 0;
}
