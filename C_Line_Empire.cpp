#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    ll sumb=0;
    for(int i=1;i<=n;i++){
        sumb+=b*(v[i]-v[i-1]);
    }
    ll ans=sumb+a*v[n-1];

    for(int i=n-2;i>=0;i--){
        ll count=(n-1)-i;
        sumb=sumb+(v[i+1]-v[i])*count*b;
        ans=min(ans,sumb+a*v[i]);
    }
    cout<<ans<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}