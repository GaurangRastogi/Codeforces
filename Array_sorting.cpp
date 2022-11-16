#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
// ll g_c_d(ll a,ll b){
//     if(b>a) return g_c_d(b,a);
//     if(a%b==0)  return b;
//     else return 
// }
void solve(){
    ll n,x;
    cin>>n;
    vector<ll>diff{};
    for(int i=1;i<=n;i++){
        cin>>x;
        ll val=abs(i-x);
        if(val)
            diff.push_back(val);
    }
    ll gcd=diff[0];
    for(ll i=1;i<diff.size();i++){
        gcd=__gcd(diff[i],gcd);
        if(gcd==1){
            cout<<1<<endl;
            return;
        }
    }
    cout<<gcd<<endl;
    return;
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