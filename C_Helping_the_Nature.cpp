#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//thanks -> you____tube
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll prefix_val=v[0],suffix_removed=0,ans=0;
    for(int i=1;i<n;i++){
        v[i]-=suffix_removed;
        if(v[i]<prefix_val){
            ans+=prefix_val-v[i];
            prefix_val=v[i];
        }
        else{
            ans+=v[i]-prefix_val;
            suffix_removed+=v[i]-prefix_val;
        }
    }
    ans+=abs(prefix_val);
    cout<<ans<<endl;
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