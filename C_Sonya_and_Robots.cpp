#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    set<ll>front{},back{};
    vector<ll>fi{},bi{};
    for(int i=0;i<n;i++){
        if(front.find(v[i])==front.end()){
            fi.push_back(i+1);
            front.insert(v[i]);
        }        
    }
    for(int i=n-1;i>=0;i--){
        if(back.find(v[i])==back.end()){
            bi.push_back(i+1);
            back.insert(v[i]);
        }        
    }
    reverse(bi.begin(),bi.end());
    ll ans=0;
    for(int i=0;i<fi.size();i++){
        // cout<<fi[i]<<" ";
        ans+=bi.end()-upper_bound(bi.begin(),bi.end(),fi[i]);
    }
    cout<<ans;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}