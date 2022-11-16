#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n,0ll);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<ll>>dp(n,vector<ll>(2,0ll));
    for(int i=1;i<n;i++){
        dp[i][1]=max(dp[i][1],((v[i]+x)^v[i-1])+dp[i-1][0]);
        dp[i][1]=max(dp[i][1],((v[i]+x)^(v[i-1]+x))+dp[i-1][1]);
        dp[i][0]=max(dp[i][0],((v[i])^(v[i-1]))+dp[i-1][0]);
        dp[i][0]=max(dp[i][0],((v[i])^(v[i-1]+x))+dp[i-1][1]);
    }
    return max(dp[n-1][0],dp[n-1][1]);

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}