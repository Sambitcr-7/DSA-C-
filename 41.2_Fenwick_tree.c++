// #include "bits/stdc++.h"
// using namespace std;
// int n;
// vector<int>bit;
// void update(int idx, int val){
//     while(idx<=n){
//         bit[idx] += val;
//         idx += idx & (-idx);
//     }
// }
// int query(int idx){
//     int ans = 0;
//     while (idx > 0)
//     {
//         ans += bit[idx];
//         idx -= idx &(-idx);
//     }
//     return ans;

// }

// int32_t main()
// {
//     cin>>n;
//     bit = vector<int>(n+1);
//     vector<int>a(n+1);
//     for(int i = 1; i <=n; i++){
//         cin>>a[i];
//         update(i,a[i]);
//     }
//     int q;
//     cin>>q;
//     while (q--)
//     {
//         int c; cin>>c;
//         if(c == 1){
//             int l,r; cin>>l>>r;
//             int ans = query(r) - query(l-1);
//             cout<<ans<<"\n";
//         }
//         else if(c == 2){
//             int index, val;
//             cin>>index>>val;
//             update(index, -a[index]);
//             a[index] = val;
//             update(index,val);

//         }
//     }

// }

// **********************************************************************************************************

#include "bits/stdc++.h"
using namespace std;
int query(int i, int bit[], int n)
{
    int ans = 0;
    while (i > 0)
    {
        ans += bit[i];
        i -= i & (-i);
    }
     return ans;
}
void update(int i, int inc, int bit[], int n){
    while (i<=n)
    {
        bit[i] += inc;
        i += i & (-i);
    }
    
}

int32_t main()
{
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int bit[n + 10] = {0};
        int u;cin>>u;
        while(u--)
        {
            int l, r, inc;
            cin>>l>>r>>inc;
            l++;
            r++;
            update(l, inc, bit, n);      //A[L..] + inc
            update(r + 1, -inc, bit, n); //A[R+1..] -inc
            //A[l..R] +inc
        }
        int q;
        cin >> q;
        while (q--)
        {
            int w;
            cin >> w;
            w++;
            cout << query(w, bit, n) << "\n";
        }
    }
}




// 1
// 5 3 
// 0 1 7
// 2 4 6
// 1 3 2
// 3 
// 0 
// 3
// 4
