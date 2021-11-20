#include"bits/stdc++.h"
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<class T> using oset = tree<T, null_type,less<T>,
                        rb_tree_tag, tree_order_statistics_node_update>;

int32_t main(){
    int q;cin>>q;
    oset<int> s;
    while (q--)
    {
        int c;cin>>c;
        if(c==1){
          int t;cin>>t; 
          s.insert(t); 
        }
        else if(c==2){
            int t; cin>>t; 
            cout<<*s.find_by_order(t)<<"\n";
        }
        else{
            int t;cin>>t;
            cout<<s.order of key(t)<<"\n";
        }
    }
     
}


// output
// 7
// 1 1
// 1 2
// 1 4
// 2 1
// 2  input
// 1 8
// 1 10
// 3 4
// 2 input