#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;

ll dfs(vector<vector<ll>>&graph,ll src,vector<ll>&visited){
    visited[src]=1;
    // cout<<src<<" ";
    ll count=1;
    for(auto node:graph[src]){
        if(!visited[node]){
            count=count+dfs(graph,node,visited);
        }
    }
    return count;
}

ll utility(ll len,ll k){
    // cout<<len<<" "<<k<<endl;
    ll ans=1;
    for(int i=1;i<=k;i++){
        ans=(ans*len)%mod;
    }
    return ans;
}
void solve(){

    ll n,k,a,b,c;
    cin>>n>>k;
    vector<vector<ll>>graph(n,vector<ll>{});
    for(int i=1;i<n;i++){       
        cin>>a>>b>>c;
        a--;
        b--;
        if(c==0){
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
    }

    vector<ll>visited(n,0);
    ll invalid=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ll len=dfs(graph,i,visited);
            invalid=(invalid+utility(len,k))%mod;
        }
    }

    ll total=1;
    for(int i=0;i<k;i++){
        total=(total*n)%mod;
    }
    
    ll ans=(total-invalid+mod)%mod;
    cout<<ans;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}