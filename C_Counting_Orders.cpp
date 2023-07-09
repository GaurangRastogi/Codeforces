#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,mod=1e9+7;
    cin>>n;

    vector<ll>a(n),b(n);
    
    for(auto &it:a)
        cin>>it;

    for(auto &it:b)
        cin>>it;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<ll>count(n,0);
    
    for(int i=0;i<n;i++){
        count[i]=n-(upper_bound(a.begin(),a.end(),b[i])-a.begin());
    }

    ll ans=1;
    for(int i=0,diff=n-1;i<n;i++,diff--){
        // cout<<count[i]<<" "<<diff<<endl;
        ans=(ans*(count[i]-diff))%mod;
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