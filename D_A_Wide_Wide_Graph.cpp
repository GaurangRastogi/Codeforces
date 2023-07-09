#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



ll bfs(vector<vector<ll>>&graph,ll n,ll source){
    queue<pair<ll,ll>>q;
    vector<ll>visited(n,0);
    q.push({source,0});
    visited[source]=1;
    ll ans=-1;
    while(q.size()){
        ll node=q.front().first;
        ll dist=q.front().second;
        q.pop();
        ans=node;
        for(auto edge:graph[node]){
            if(!visited[edge]){
                q.push({edge,dist+1});
                visited[edge]=1;
            }
        }
    }
    return ans;
}
pair<ll,ll> findTwoEnds(vector<vector<ll>>&graph,ll n){

    ll lastNode=bfs(graph,n,1);
    ll secondLastNode=bfs(graph,n,lastNode);

    return {lastNode,secondLastNode};

}


void bfsUtility(vector<vector<ll>>&graph,ll n,ll src,vector<ll>&distance){
    queue<pair<ll,ll>>q;
    vector<ll>visited(n,0);
    q.push({src,0});
    visited[src]=1;
    while(q.size()){
        ll node=q.front().first;
        ll dist=q.front().second;
        q.pop();
        distance[node]=dist;
        for(auto edge:graph[node]){
            if(!visited[edge]){
                q.push({edge,dist+1});
                visited[edge]=1;
            }
        }
    }
}
void solve()
{
    ll n,a,b;
    cin>>n;

    vector<vector<ll>>graph(n);
    
    for(ll i=1;i<n;i++){
        cin>>a>>b;
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }

    pair<ll,ll>p=findTwoEnds(graph,n);

    ll end1=p.first;
    ll end2=p.second;

    vector<ll>dist1(n,0),dist2(n,0),dist(n,0);

    bfsUtility(graph,n,end1,dist1);
    bfsUtility(graph,n,end2,dist2);

    for(ll i=0;i<n;i++){
        dist[i]=max(dist1[i],dist2[i]);
    }

    sort(dist.begin(),dist.end());
    
    
    for(int i=1;i<=n;i++){
        ll oneElement=lower_bound(dist.begin(),dist.end(),i)-dist.begin();
        if(oneElement==n){
            cout<<oneElement<<" ";
        }
        else{
            cout<<oneElement+1<<" ";
        }
    }

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