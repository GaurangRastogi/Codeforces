#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m,x,a,b,sum=0,mn=INT_MAX;
    cin>>n>>m;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    vector<pair<ll,ll>>vp{};
    map<ll,ll>mp{};
    for(int i=0;i<m;i++){
        cin>>a>>b;
        mp[a]++;
        mp[b]++;
        vp.push_back({a,b});
    }
    if(m%2==0){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<m;i++){
        if(mp[vp[i].first]%2==0&&mp[vp[i].second]%2==0)
            mn=min(mn,v[vp[i].first]+v[vp[i].second]);
    }
    for(int i=1;i<=n;i++){
        if(mp[i]%2==1)
            mn=min(mn,v[i]);
    }
    cout<<mn<<endl;
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