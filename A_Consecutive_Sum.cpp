#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n,0);
    vector<ll>ans(k,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        ans[i%k]=max(ans[i%k],v[i]);
    }
    ll sum=0;
    for(auto i:ans)
        sum+=i;
    cout<<sum<<endl;
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