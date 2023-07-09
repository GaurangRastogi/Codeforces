#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,m;
    cin>>n>>m;

    vector<pair<ll,ll>>vp;
    ll x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        vp.push_back({min(x,y),max(x,y)});
    }

    sort(vp.begin(),vp.end(),greater<pair<ll,ll>>());
    
    ll mn=n+1;
    vector<ll>v(n+1,n+1);
    for(auto p:vp){
        mn=min(mn,p.second);
        v[p.first]=mn;
    }

    mn=n+1;
    for(int i=n;i>=1;i--){
        mn=min(mn,v[i]);
        v[i]=mn;
    }
    
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans=ans+(v[i]-i);
    }
    cout<<ans<<endl;
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