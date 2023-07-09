#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,f;
    cin>>n>>f;
    ll a,b;


    vector<pair<ll,ll>>vp;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vp.push_back({a,b});
    }

    sort(vp.begin(),vp.end());

    for(int i=1;i<n;i++){
        vp[i].second+=vp[i-1].second;
    }
    
    vector<ll>first(n),second(n);

    for(int i=0;i<n;i++){
        first[i]=vp[i].first;
        second[i]=vp[i].second;
    }

    ll prev=0,ans=0;
    for(int i=0;i<n;i++){
        ll ind=upper_bound(first.begin(),first.end(),first[i]+f-1)-first.begin();
        ans=max(ans,second[ind-1]-prev);
        prev=second[i];
    }
    cout<<ans<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}