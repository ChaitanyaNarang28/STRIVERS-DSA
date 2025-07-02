#include <bits/stdc++.h>
using namespace std;

int main()
{
    // String declaration and basic properties
    string s = "Om Namoh Shivay";
    cout << "String is: " << s << endl;
    cout << "Length of string is: " << s.length() << endl;
    cout << "Size of string is: " << s.size() << endl; // same as length()
    cout << "Is string empty? " << (s.empty() ? "Yes" : "No") << endl;

    // Printing each character
    cout << "Printed each character of string individually: ";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    // C-style string
    cout << "\nString declared using char array:" << endl;
    char c1[] = "Hello World";
    cout << c1 << endl;
    cout << "Length of string is: " << strlen(c1) << " (calculated using strlen())" << endl;

    // Comparing strings
    cout << "\nComparing strings:" << endl;
    string s1 = "Hello";
    string s2 = "Hello";
    cout << (s1 == s2) << " <- 1 means Equal, 0 means Not Equal" << endl;
    cout << (s1 < s2) << " <- 1 means s1 < s2, else Not Less Than" << endl;

    // Append
    cout << "\nAppending strings:" << endl;
    string a = "Hello";
    a.append(" World");
    cout << "After append: " << a << endl;

    // Clear
    cout << "\nClearing a string:" << endl;
    string temp = "Temporary";
    temp.clear();
    cout << "After clear: '" << temp << "', Length: " << temp.length() << endl;

    // Accessing characters
    cout << "\nAccessing characters:" << endl;
    string word = "Shivay";
    cout << "Character at index 2: " << word.at(2) << endl;
    cout << "Front character: " << word.front() << endl;
    cout << "Back character: " << word.back() << endl;

    // Substring
    cout << "\nSubstring operations:" << endl;
    string sub = s.substr(3, 5); // start from index 3, length 5
    cout << "Substring of s (index 3, length 5): " << sub << endl;

    // Find
    cout << "\nFinding substrings:" << endl;
    cout << "First occurrence of 'Shiv': " << s.find("Shiv") << endl;
    cout << "Last occurrence of 'a': " << s.rfind("a") << endl;

    // Replace
    cout << "\nReplacing substrings:" << endl;
    string r = "I love coding";
    r.replace(7, 6, "C++"); // replace 6 chars at index 7 with "C++"
    cout << "After replace: " << r << endl;

    // Insert
    cout << "\nInserting into string:" << endl;
    string ins = "Hello";
    ins.insert(5, " World");
    cout << "After insert: " << ins << endl;

    // Erase
    cout << "\nErasing part of string:" << endl;
    string e = "Hello World";
    e.erase(5, 6); // remove 6 characters starting from index 5
    cout << "After erase: " << e << endl;

    // Push and Pop
    cout << "\nPush and Pop operations:" << endl;
    string p = "Ram";
    p.push_back('a');
    cout << "After push_back('a'): " << p << endl;
    p.pop_back();
    cout << "After pop_back(): " << p << endl;

    // Swap
    cout << "\nSwapping strings:" << endl;
    string s3 = "Shiva";
    string s4 = "Parvati";
    cout << "Before Swap: s3 = " << s3 << ", s4 = " << s4 << endl;
    s3.swap(s4);
    cout << "After Swap: s3 = " << s3 << ", s4 = " << s4 << endl;

    return 0;
}
