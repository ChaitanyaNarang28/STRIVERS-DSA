#include<bits/stdc++.h>
using namespace std;

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

}