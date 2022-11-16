#include<bits/stdc++.h>
using namespace std;
void solve(){
    unordered_map<int,vector<int>>um{};
    int n,m;
    int a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        um[a].push_back(b);
        um[b].push_back(a);
    }
    cout<<1<<" ";
    unordered_map<int,int>visited{};
    set<int>st{};
    visited[1]=1;
    for(int i=2;i<=n;i++)   visited[i]=-1;
    for(auto i:um[1]){
        //cout<<i<<" "<<visited[i]<<" ";
        if(visited[i]!=1)   st.insert(i);
    }
    while(st.size()){
        int val=*st.begin();
        cout<<val<<" ";
        visited[val]=1;
        st.erase(val);
        for(auto i:um[val]){
            if(visited[i]!=1)   st.insert(i);
        }
    }   
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}