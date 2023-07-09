#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 
void solve( ){
    ll count=0,prev=1,curr;
    string l,r;
    cin>>l>>r;
    while(l.size()<r.size()){
        l="0"+l;
    }

    ll n=r.size();
    vector<ll>dp(n,0);
    
    dp[0]=(r[0]-'0')-(l[0]-'0');

    for(int i=1;i<n;i++){
        // cout<<(r[])
        dp[i]+=stoi(r.substr(i))-stoi(l.substr(i));
    }
    ll sum=0;
    for(auto i:dp){
        sum+=i;
        cout<<i<<" ";
    }
    
    cout<<sum<<endl;
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