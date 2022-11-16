#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,a,b;
    cin>>n;
    vector<pair<ll,ll>>vp{};
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    ll day=vp.begin()->second;
    for(int i=1;i<n;i++){
        if(vp[i].second<day)
            day=vp[i].first;
        else
            day=vp[i].second;
    }
    cout<<day<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    solve();
    return 0;
}