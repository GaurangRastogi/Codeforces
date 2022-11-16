#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,x,y;
    cin>>n;
    vector<pair<ll,ll>>vp{};
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(vp.size()!=0){
            pair<ll,ll>p=vp.back();
            if(p.first==x&&p.second==y)
                continue;
        }
        vp.push_back({x,y});
    }
    ll m=vp.size(),curr=0,count=0;
    for(int i=0;i<m;i++){
        ll temp=min(vp[i].first,vp[i].second);
        if(curr<=temp){
            count+=(temp-curr)+1;
        }
        curr=max(vp[i].first,vp[i].second);
        if(curr==temp)
            curr++;
    }
    cout<<count<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

