#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,val;
    cin>>n;

    vector<ll>arr(n),indegree(n,0);
    vector<vector<ll>>graph(n,vector<ll>{});
    for(int i=0;i<n;i++){
        cin>>val;
        
        graph[val-1].push_back(i);
        graph[i].push_back(val-1);
    }

    ll mn=1,mx=0;
    vector<ll>visited(n,0);

    for(int i=0;i<n;i++){
        if(!visited[i]){
            mx++;
            ll flag=0;
            queue<pair<ll,ll>>q;
            q.push({i,-1});

            while(q.size()){
                ll node=q.front().first;
                ll par=q.front().second;
                q.pop();
                visited[node]=1;

                for(auto edge:graph[node]){
                    if(visited[edge]&&edge!=par){
                        flag=1;
                    }
                    if(!visited[edge]){
                        q.push({edge,node});
                        // visited[edge]=true;
                    }
                }
            }

            mn+=flag;
        }
    }

    cout<<min(mn,mx)<<" "<<mx<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}