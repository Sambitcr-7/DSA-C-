#include"bits/stdc++.h"
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)


const int N = 1e5+2 , MOD = 1e9+7; 

int dp[N];

int lis(vi &a , int n)
{
    if(dp[n] != -1)
    return dp[n];

    dp[n] =1; // single element is also lis

    rep(i,0,n)
    {
        if(a[n]  > a[i])
        dp[n] = max(dp[n], 1+lis(a,i));
    }

    return dp[n];
}



signed main()
{

    rep(i,0,N)
    dp[i] = -1;


    int n;
    cin >> n;

    vi a(n);
    rep(i,0,n)
    {
        cin >> a[i];
    }

    cout << lis(a, n-1) << endl;

    return 0;
}