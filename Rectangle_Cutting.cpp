#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;

ll dp[501][501];

ll memoization(ll a,ll b){
    if(a==b)
        return 0;
    else if(dp[a][b]!=-1)
        return dp[a][b];

    else{
        ll mn=INT_MAX;

        //try with every a
        for(int i=1;i<a;i++){
            mn=min(mn,1ll+memoization(i,b)+memoization(a-i,b));
        }

        //try with every b
        for(int i=1;i<b;i++){
            mn=min(mn,1ll+memoization(a,i)+memoization(a,b-i));
        }

        return dp[a][b]=mn;
    }
}
int main()
{
    ll n,m;
    cin>>n>>m;

    memset(dp,-1,sizeof(dp));
    cout<<memoization(n,m)<<endl;
    return 0;
}