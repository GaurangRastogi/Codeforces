#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
int mod=1e9+7;
bool pal(ll n){
    v={};
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    ll l=0,h=v.size()-1;
    while(l<h){
        if(v[l]!=v[h])
            return false;
        l++;
        h--;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=40000;
    vector<ll>coins{};
    for(ll i=1;i<=n;i++){
        if(pal(i))  
            coins.push_back(i);
    }
    int m=coins.size();
    vector<vector<ll>>dp(m+2,vector<ll>(n+2,0));
    for(int i=0;i<=m;i++)
        dp[i][0]=1;


    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(j>=coins[i-1])
                dp[i][j]=(dp[i][j-coins[i-1]]+dp[i-1][j])%mod;
            else
                dp[i][j]=dp[i-1][j];
        }
    }

    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<dp[498][n]<<endl;
    }
    return 0;
}