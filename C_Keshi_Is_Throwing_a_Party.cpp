#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;

bool bs_ans(vector<pair<ll,ll>>&vp,int k){
    ll count=0;

    for(auto pr:vp){
        ll y=pr.first;
        ll x=pr.second;

        if(x>=count&&y>=(k-(count+1))){
            count++;
        }
    }

    return count>=k;
}
void solve(){

    ll n,a,b;
    cin>>n;

    vector<pair<ll,ll>>vp;
    
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vp.push_back({a,b});
    }
    
    // sort(vp.begin(),vp.end());

    // for(auto i:vp){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    //l is always true
    //h always false
    ll l=1,h=n+1;

    while(l+1<h){
        ll mid=(l+h)>>1;
        if(bs_ans(vp,mid))
            l=mid;
        else
            h=mid;
    }
    cout<<l<<endl;
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