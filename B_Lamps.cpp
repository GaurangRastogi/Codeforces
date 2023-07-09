#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool comparator(pair<ll,ll>&p1,pair<ll,ll>&p2){
    if(p1.first!=p2.first)
        return p1.first<p2.first;
    return p1.second>p2.second;
}
void solve(){
    ll n;
    cin>>n;

    vector<pair<ll,ll>>vp;  

    ll a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vp.push_back({a,b});
    }

    sort(vp.begin(),vp.end(),comparator);


    vector<ll>temp;
    for(auto pr:vp){
        temp.push_back(pr.first);
    }


    ll ans=0,ind=0,curr=0;

    
    while(ind<n){
        if(curr<=ind){
            ans+=vp[ind].second;
            curr=upper_bound(temp.begin()+curr,temp.end(),ind-curr+1)-temp.begin();
        }
        ind++;
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
    while(t--)
        solve();
    return 0;
}