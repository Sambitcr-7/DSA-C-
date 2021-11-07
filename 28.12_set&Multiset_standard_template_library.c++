#include<iostream>
#include<set>
using namespace std;

int32_t main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    for(auto i : s)
       cout<< i << " ";
    cout<<"\n";
    cout<<s.size()<<"\n";
    s.erase(2);
    for(auto i : s)
        cout<< i << " ";
    s.erase(s.find(3));
    s.erase(3);
    cout <<"\n";
    for(auto i : s)
        cout<< i <<" ";   
    cout << "\n"; 
}