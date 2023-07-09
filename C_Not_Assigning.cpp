#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<pair<ll,ll>,ll>mp;
void dfs(ll src,vector<vector<ll>>&graph,vector<ll>&visited,ll val){
    // cout<<src<<" ";
    visited[src]=1;

    for(auto edge:graph[src]){
        if(visited[edge]==0){
            mp[{src,edge}]=val;
            val=5-val;
            dfs(edge,graph,visited,val);
        }
    }
}
void solve()
{
    ll n,a,b;
    cin>>n;
    vector<pair<ll,ll>>vp;
    
    for(ll i=1;i<n;i++){
        cin>>a>>b;
        vp.push_back({a-1,b-1});
    }

    vector<vector<ll>>graph(n,vector<ll>{});

    for(ll i=0;i<n-1;i++){
        graph[vp[i].first].push_back(vp[i].second);
        graph[vp[i].second].push_back(vp[i].first);   
    }

    for(ll i=0;i<n;i++){
        if(graph[i].size()>2){
            cout<<-1<<endl;
            return;
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<graph[i].size();j++){
    //         cout<<graph[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<ll>visited(n,0);
    for(int i=0;i<n;i++){
        if(graph[i].size()==1){
            dfs(i,graph,visited,2);
            break;
        }
    }
    // dfs(0,graph,visited,2);
    // cout<<endl;
    for(auto p:vp){
        if(mp.find(p)!=mp.end()){
            cout<<mp[p]<<" ";
        }
        else{
            cout<<mp[{p.second,p.first}]<<" ";
        }
    }
    cout<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}