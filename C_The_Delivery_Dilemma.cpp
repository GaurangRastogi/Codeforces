#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,sum=0;
    cin>>n; 
    vector<ll>a(n,0),b(n,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];

    vector<pair<ll,ll>>vp{};
    for(int i=0;i<n;i++){
        vp.push_back({a[i],b[i]});
    }

    sort(vp.begin(),vp.end());

    for(int i=0;i<n;i++){
        sum+=vp[i].second;
        vp[i].second=sum;
    }
    ll mn=sum;
    for(int i=0;i<n;i++){
        mn=min(max(vp[i].first,sum-vp[i].second),mn);
    }
    cout<<mn<<endl;
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