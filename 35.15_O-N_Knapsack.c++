#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n = 5, w = 11;
    vector<int> val = {3,2,4,5,1};
    vector<int> wt {4,3,5,6,1};
    vector<int> dp(w+1,0);
    for(int j = 0; j <=w; j++){
        for(int i = 0; i<n; i++ ){
            dp[j] = max(dp[j], val[i] + dp[j- wt[i]]);
        }
    }
    cout<<dp[w];
}

