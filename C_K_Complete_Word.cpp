#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){

    ll n,k;
    cin>>n>>k;

    string str;
    cin>>str;

    vector<vector<ll>>v(k,vector<ll>(26,0));

    for(int i=0;i<str.size();i++){
        v[i%k][str[i]-'a']++;
    }

    ll l=0,r=k-1;
    ll ans=0;
    while(l<=r){
        vector<ll>temp(26,0);
        for(int i=0;i<26;i++){
            temp[i]=v[l][i]+v[r][i];
            if(l==r)
                temp[i]/=2;
        }
        ll mx=0,sum=0;
        for(auto i:temp){
            mx=max(mx,i);
            sum+=i;
        }
        ans=ans+(sum-mx);
        l++;
        r--;
    }
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