#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin>>n;

    string str;
    cin>>str;
    ll mod= 998244353;
    vector<ll>dp(n,0);
    dp[0]=1;

    for(int i=1;i<n;i++){
        if(str[i-1]^str[i])
            dp[i]=1;

        else
            dp[i]=(dp[i-1]*2)%mod;
    }
    
    ll sum=0;
    for(int i=0;i<n;i++)
        sum=(sum+dp[i])%mod;

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