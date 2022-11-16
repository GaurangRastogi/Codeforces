#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod  = 998244353;
//tutorial
int func(int n, int r)
{
    // Optimization for the cases when r is large
    if (r > n - r)
        r = n - r;
 
    // The array C is going to store last row of
    // pascal triangle at the end. And last entry
    // of last row is nCr
    vector<int>C(r+1,0);
 
    C[0] = 1; // Top row of Pascal Triangle
 
    // One by constructs remaining rows of Pascal
    // Triangle from top to bottom
    for (int i = 1; i <= n; i++) {
 
        // Fill entries of current row using previous
        // row values
        for (int j = min(i, r); j > 0; j--)
 
            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j - 1]) % mod;
    }
    return C[r];
}
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>dp(n+1,pair<ll,ll>{0,0});
    dp[2]={1,0};
    for(int i=4;i<=n;i+=2){
        //cout<<nCr(i-1,i/2)<<" "<<nCr(i-2,i/2)<<endl;
        ll val1=(func(i-1,i/2)+dp[i-2].second)%mod;
        ll val2=(func(i-2,i/2)+dp[i-2].first)%mod;
       // cout<<val1<<" "<<val2<<endl;
        dp[i]={val1,val2};
    }
    cout<<dp[n].first<<" "<<dp[n].second<<" 1"<<endl;
    return;
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



/*
int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    if(n==0)
    return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = (res * i);
    return res;
}
*/