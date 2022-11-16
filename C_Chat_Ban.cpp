#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll binary_search(ll l,ll h,ll k,ll n){
    int m=(l+h)/2;
    if(m*m==n)   return m;
    
}
void solve(){
    ll k,n,l,h;
    cin>>k>>n;
    if(k*k<=n)  cout<<k;
    else{
        l=0;
        h=k;
        binary_search(l,h,k,n);
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}