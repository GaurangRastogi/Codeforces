#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,x;
    cin>>n;
    vector<pair<ll,ll>>vp{};
    vector<ll>ans{};
    for(int i=0;i<n;i++){
        cin>>x;
        vp.push_back({x,i+1});
    }
    sort(vp.begin(),vp.end());
    ll prefix_sum=vp[0].first,ind=0;
    for(int i=1;i<n;i++){
        if(vp[i].first>prefix_sum){
            ind=i;
        }
        prefix_sum+=vp[i].first;
    }
    for(int i=ind;i<n;i++){
        ans.push_back(vp[i].second);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}