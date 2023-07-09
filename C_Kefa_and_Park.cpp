#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll dfs(ll src,ll par,ll count,ll k,vector<ll>&cats,vector<vector<ll>>&graph){
    if(count>k)
        return 0;
    if(graph[src].size()==1&&par!=-1)
        return 1;
        
    ll ans=0;
    for(auto edge:graph[src]){
        if(edge!=par){
            if(cats[edge]==1)
                ans+=dfs(edge,src,count+1,k,cats,graph);
            else
                ans+=dfs(edge,src,0,k,cats,graph);
        }   
    }
    return ans;
}
void solve(){
    ll n,k,a,b;
    cin>>n>>k;

    vector<ll>cats(n);
    for(auto &it:cats)
        cin>>it;
    
    vector<vector<ll>>graph(n,vector<ll>{});

    for(int i=1;i<n;i++){
        cin>>a>>b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    ll src=0,par=-1,count=cats[0];
    
    
    ll ans=dfs(src,par,count,k,cats,graph);
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}