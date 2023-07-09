#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,k,val;
    cin>>n>>k;

    vector<pair<ll,ll>>vp(n);
    vector<ll>b(n);
    for(int i=0;i<n;i++){
        cin>>val;
        vp[i]={val,i};
    }   

    for(int i=0;i<n;i++)
        cin>>b[i];

    sort(vp.begin(),vp.end());
    sort(b.begin(),b.end());

    vector<ll>ans(n);

    for(int i=0;i<n;i++)
        ans[vp[i].second]=b[i];

    for(auto val:ans)
        cout<<val<<" ";

    cout<<endl;
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