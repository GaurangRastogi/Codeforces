#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 
// x^y % mod
ull power(ll x, ll y, ll p=mod){
    ull res=1;
 
    x=x%p;
 
    while(y>0){
        if(y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res%p;
}
 
//can also use extended eucilidean algorithm
//but using fermat litte's theorem
ull modInverse(ll n, ll p=mod){
    return power(n,p-2,p);
}
 


void solve(){
    ll n,m,val;
    cin>>n>>m;

    
    vector<ll>arr(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    
    vector<pair<ll,ll>>vp;
    for(auto it:mp){
        vp.push_back({it.first,it.second});
    }

    ll ans=0,cnt=1,start=0;

    if(vp.size()<m){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<m-1;i++){
        cnt=(cnt*vp[i].second)%mod;
    }

    
    for(int i=m-1;i<vp.size();i++){
        // cnt=(cnt*vp[i].second)%mod;
        
        if(vp[i].first-vp[i-m+1].first!=m-1){
            cnt=vp[i].second;
        }
        else{
            val=1;
            if(i-m>=0)
                val=modInverse(vp[i-m].second,mod);
            cnt=((cnt*vp[i].second)%mod*val)%mod;
            ans=(ans+cnt)%mod;
        }
    }
    cout<<ans<<endl;
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