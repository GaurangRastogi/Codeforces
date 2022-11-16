#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//thanks id_on_phy
void solve(){
    ll n,k,sum=0;
    cin>>n>>k;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    vector<ll>diff{};
    for(ll i=1;i<n;i++){
        diff.push_back(v[i-1]-v[i]);
    }

    ll res=v[n-1]-v[0];

    sort(diff.begin(),diff.end());
    for(int i=0;i<k-1;i++)
        res+=diff[i];
    cout<<res<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}