#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comparator(pair<ll,ll> a,pair<ll,ll> b){
    return a.first>b.first;
}
void solve(){
    ll n,x;
    cin>>n;
    vector<pair<ll,ll>>vp{};
    for(int i=0;i<n;i++){
        cin>>x;
        vp.push_back({x,i+1});
    }
    sort(vp.begin(),vp.end());
    vector<vector<ll>>ans{};
    for(int i=0;i<n;i++){
        if(vp[i].second==i+1)
            continue;
        else{
            ans.push_back({i+1,vp[i].second,vp[i].second-i-1});
            for(int j=0;j<n;j++){
                if(vp[j].second<vp[i].second){
                    vp[j].second++;
                }
            }
            vp[i].second=i+1;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}