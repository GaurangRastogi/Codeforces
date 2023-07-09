#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
   
    ll n,m,k,mx=0,temp;
    cin>>n>>m>>k;

    ll val=n/k,valplus1=n%k;
    unordered_map<ll,ll>um;
    for(ll i=0;i<m;i++){
        cin>>temp;
        um[temp]++;
        mx=max(mx,temp);
    }   

    // cout<<mx<<" "<<val<<" "<<val+1<<" "<<um[mx]<<endl;
    if(mx<=val){
        cout<<"YES"<<endl;
        return;
    }
    else if(mx==val+1){
        if(um[mx]<=valplus1){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}