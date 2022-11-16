#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll first=v[0],second=v[n-1];
    ll mn=INT_MAX,mx=INT_MIN;
    for(int i=1;i<n;i++){
        mx=max(mx,v[i]);
    }
    for(int i=0;i<n-1;i++){
        mn=min(mn,v[i]);
    }
    ll ans=max(second-mn,mx-first);
    for(int i=0;i<n;i++){
        ans=max(ans[(i+1)]-)
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    cout<<solve()<<endl;
    return 0;
}