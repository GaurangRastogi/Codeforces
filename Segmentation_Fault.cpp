#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,a,b;
    cin>>n;
    vector<int>v(n+1,0);
    vector<pair<int,int>>vp{};
    vp.push_back({0,0});
    vector<int>ans{};
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        vp.push_back({a,b});
        for(int j=a;j<=b;j++){
            v[j]++;
        }
    }
    for(int i=1;i<=n;i++){
        //cout<<v[i]<<" "<<i<<" "<<b<<endl;
        if(i>=vp[i].first&&i<=vp[i].second) continue;
        else ans.push_back(i); 
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
        cout<<i<<endl;
    cout<<endl;
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