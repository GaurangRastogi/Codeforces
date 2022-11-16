#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n,a,b;
   cin>>n;
   map<int,vector<int>>graph;
   map<int,int>mp;
   int mx=INT_MIN;
   for(int i=0;i<n;i++){
       cin>>a>>b;
       graph[a].push_back(b);
       graph[b].push_back(a);
       mp[a]++;
       mp[b]++;
       mx=max(mx,max(mp[a],mp[b]));
   }
   for(auto )

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