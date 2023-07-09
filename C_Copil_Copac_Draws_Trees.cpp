#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ans=0;

//watched :(
void dfs(ll src,ll par,vector<vector<pair<ll,ll>>>&graph,ll reading,ll ind){
    ans=max(ans,reading);
    for(auto pr:graph[src]){
        ll node=pr.first;
        ll idx=pr.second;
        //if at same edge (src,node) is edge, then also it won't add 1
        //eg) (1,2)=> where 1 is already added, and 1->2 is edge, so it won't add
        //only add when ind is lesser
        if(node!=par)
            dfs(node,src,graph,reading+(idx<ind),idx);
    }
    return;
}
void solve(){

    ll n;
    cin>>n;
    ans=0;
    vector<vector<pair<ll,ll>>>graph(n,vector<pair<ll,ll>>{});
    ll a,b;
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        a--;
        b--;
        graph[a].push_back({b,i});
        graph[b].push_back({a,i});
    }

    //0-> index taking -1 (since we don't know and should be minimum)
    dfs(0,-1,graph,1,-1);


    cout<<ans<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}