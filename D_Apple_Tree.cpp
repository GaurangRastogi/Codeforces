#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dfs(ll src,ll par,vector<ll>&dp,vector<vector<ll>>&graph){

    if(graph[src].size()==1&&src!=1)
        return dp[src]=1;

    ll ans=0;
    for(auto edge:graph[src]){
        if(edge!=par){
            ans+=dfs(edge,src,dp,graph);
        }
    }

    return dp[src]=ans;
}
void solve()
{
    ll n;
    cin>>n;


    vector<vector<ll>>graph(n+1,vector<ll>{});

    ll a,b;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<ll>dp(n+1,0);
    //node, par,dp
    dfs(1,0,dp,graph);

    // for(auto i:dp){
    //     cout<<i<<" ";
    // }

    ll q;
    cin>>q;

    for(int i=0;i<q;i++){
        cin>>a>>b;
        cout<<dp[a]*dp[b]<<endl;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}