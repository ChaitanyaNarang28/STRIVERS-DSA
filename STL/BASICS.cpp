#include<bits/stdc++.h>
using namespace std;

class person{
    //CLASS FOR SET
    public:
    int age;
    string name;

    bool operator < (const person &other) const{
        return age<other.age;
        // return age<other.age;   TO PRINT IN REVERSE ORDER
    }
};

int main()
{
//PAIR
    cout<<"PAIRS"<<endl;
    pair<string,int>p1;
    p1=make_pair("Chaitanya",30); //METHOD-1

    p1.first="Narang"; //METHOD-2
    p1.second=12;

    cout<<"PAIR-1 OUTPUT: "<<p1.first<<" "<<p1.second<<endl;  //PRINTING FIRST PAIR

//NESTED PAIR
    pair<int,pair<string,string>>p2;
    p2=make_pair(1203,make_pair("Chaitanya","Narang")); //FIRST METHOD
    
    p2.first=1203;   //SECOND METHOD
    p2.second.first="C"; //SECOND METHOD
    p2.second.second="N"; //SECOND METHOD

    cout<<"PAIR-2 OUTPUT: "<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl<<endl;


//LIST
    cout<<"LISTS"<<endl;
    list<int> l1;
    l1.push_back(20);  //PUSH BACK FUNCTION
    l1.push_back(30);
    l1.push_back(40);
    l1.push_front(10); //PUSH FRONT FUNCTION
    l1.push_back(50);
    l1.push_back(90);
    l1.push_back(60);
    l1.push_front(0);
    l1.push_back(70);

    cout<<"Front element: "<<l1.front()<<" ,Last Element: "<<l1.back()<<endl;
    cout<<"Size of list: "<<l1.size()<<endl;

    l1.pop_back(); //POP BACK FUNCTION
    l1.pop_front(); //POP FRONT FUNCTION
    cout<<"Front element after pop : "<<l1.front()<<" ,Last Element after pop : "<<l1.back()<<endl;
    cout<<"Size of list after pop : "<<l1.size()<<endl;
    
    cout<<"All elements of list: ";
    for(auto it=l1.begin(); it!=l1.end();it++)
    {
        cout<<*it<<" ";  //PRINTING ALL VALUES
    }
    cout<<endl<<"List in reverse: ";
    for(auto it=l1.rbegin(); it!=l1.rend();it++)
    {
        cout<<*it<<" ";  //PRINTING ALL VALUES IN REVERSE
    }
    cout<<endl<<endl;

//SET
    cout<<"SETS"<<endl;
    set<int>s1; //SET IN ASCENDING ORDER
    s1.insert(10);   //INSERT FUNCTION
    s1.insert(20);
    s1.insert(110);
    s1.insert(10);
    s1.insert(30);
    s1.insert(200);
    s1.insert(20);
    s1.insert(210);
    cout<<"Set In Ascending Order: ";
    for(auto it=s1.begin(); it!=s1.end();it++)
    {
        cout<<*it<<" "; //PRINTING ALL VALUES
    }
    cout<<endl;

    set<int, greater<int>>s2;  //SET IN DESCENDING ORDER
    s2.insert(10);   //INSERT FUNCTION
    s2.insert(20);
    s2.insert(110);
    s2.insert(10);
    s2.insert(30);
    s2.insert(200);
    s2.insert(20);
    s2.insert(210);
    cout<<"Set In Descending Order: ";
    for(auto it=s2.begin(); it!=s2.end();it++)
    {
        cout<<*it<<" "; //PRINTING ALL VALUES
    }
    cout<<endl;

    if(s1.find(200)!=s1.end()) cout<<"Present";  //CHECKING IF ELEMENT IS PRESENT
    else cout<<"Not Present";
    cout<<endl;

    if(s1.count(25)) cout<<"Present"; //METHOD 2 FOR CHECKING IF ELEMENT IS PRESENT
    else cout<<"Not Present"; 
    cout<<endl;

    s1.erase(110);  //DELETING ELEMENT
    cout<<"Set After deletion: ";
    for(auto it=s1.begin(); it!=s1.end();it++)
    {
        cout<<*it<<" "; 
    }
    cout<<endl;

    set<person>s3;
    person a1,a2,a3;
    a1.age=10, a1.name="Chaitanya";
    a2.age=20, a2.name="XYZ";
    a3.age=5, a3.name="ABC";
    
    s3.insert(a1);
    s3.insert(a2);
    s3.insert(a3);
    cout<<"SET MADE OF CLASS: ";
    for(auto it=s3.begin();it!=s3.end();it++)
    {
        cout<<(*it).age<<" "<<(*it).name<<endl;
    }
    cout<<endl;

    multiset<int> s4;  //MULTISET ALLOWS DUPLICATE VALUES
    s4.insert(10);
    s4.insert(20);
    s4.insert(10);
    s4.insert(40);
    cout<<"MULTI-SET: ";
    for(auto it=s4.begin(); it!=s4.end();it++)
    {
        cout<<*it<<" "; 
    }
    cout<<endl<<endl;

//UNORDERED SET
    cout<<"UNORDERED SET: ";
    unordered_set<int>u1;
    u1.insert(10);   //INSERT FUNCTION
    u1.insert(20);
    u1.insert(110);
    u1.insert(10);
    u1.insert(30);
    u1.insert(200);
    u1.insert(20);
    u1.insert(210);
    for(auto it=u1.begin(); it!=u1.end();it++)
    {
        cout<<*it<<" "; 
    }
    cout<<endl;

    cout<<"UNORDERED MULTI-SET: ";
    unordered_multiset<int>u2;
    u2.insert(10);   //INSERT FUNCTION
    u2.insert(20);
    u2.insert(110);
    u2.insert(10);
    u2.insert(30);
    u2.insert(200);
    u2.insert(20);
    u2.insert(210);
    for(auto it=u2.begin(); it!=u2.end();it++)
    {
        cout<<*it<<" "; 
    }
    cout<<endl<<endl;

//MAPS
    cout<<"MAPS"<<endl;
    map<int,int>m1;
    m1.insert(make_pair(20,30));
    m1.insert(make_pair(30,60));
    m1.insert(make_pair(40,30));
    m1.insert(make_pair(20,230)); //DUPLICATE KEY
    m1.insert(make_pair(50,10));
    m1[100]=60;  //ANOTHER WAY OF INSERTION

    cout<<"Printing all values of map: "<<endl;
    for(auto it=m1.begin(); it!=m1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    m1[20]=70;   //ALSO USED FOR UPDATING
    cout<<"Printing updated values of map: "<<endl;
    for(auto it=m1.begin(); it!=m1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Printing values on particular key: "<<m1[100];
    cout<<endl<<"Deleting a particular key:";
    m1.erase(20);
    for(auto it=m1.begin(); it!=m1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    multimap<int,int>m2;
    m2.insert(make_pair(20,30));
    m2.insert(make_pair(30,60));
    m2.insert(make_pair(40,30));
    m2.insert(make_pair(20,230)); //DUPLICATE KEY
    m2.insert(make_pair(50,10));
    // m2[100]=60;  //ANOTHER WAY OF INSERTION

    cout<<"Printing all values of multimap map: "<<endl;
    for(auto it=m2.begin(); it!=m2.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}