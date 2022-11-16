#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

//tutorial
void solve(){
    ll n,m,a,b;
    cin>>n>>m;
    vector<vector<ll>>graph(n+1,vector<ll>(n+1,0));
    vector<ll>degree(n+1,0);
    for(int i=0;i<m;i++){
        cin>>a>>b;
        graph[a][b]=1;
        graph[b][a]=1;
        degree[a]++;
        degree[b]++;
    }
    ll mn=INT_MAX;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(graph[i][j]==1){
                for(int k=j+1;k<=n;k++){
                    if(graph[i][k]==1&&graph[j][k]==1)
                            mn=min(mn,degree[i]+degree[j]+degree[k]);
                }
            }
        }
    }
    if(mn==INT_MAX)
        cout<<-1<<endl;
    else    
        cout<<mn-6<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}