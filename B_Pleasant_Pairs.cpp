#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,count=0,x,val;
    cin>>n;
    vector<pair<ll,ll>>vp{};
    for(int i=0;i<n;i++){
        cin>>x;
        vp.push_back({x,i});
    }
    sort(vp.begin(),vp.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            val=vp[i].first*vp[j].first;
            // cout<<vp[i].first<<" "<<vp[i].second<<endl;
            // cout<<vp[j].first<<" "<<vp[j].second<<endl<<endl;
            if(val>2*n)
                break;
            else
                count+=(val==(vp[i].second+vp[j].second+2));
        }
    }
    cout<<count<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)  
    solve();
    return 0;
}