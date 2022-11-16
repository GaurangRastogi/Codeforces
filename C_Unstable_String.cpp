#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//referred idonthatephy
ll solve(){
    string st;
    cin>>st;
    ll n=st.size();
    vector<vector<ll>>dp(2,vector<ll>(n+1,0));
    ll ans=0;
    for(int j=1;j<=n;j++){
        if(st[j-1]=='?'){
            dp[0][j]=dp[1][j-1]+1;
            dp[1][j]=dp[0][j-1]+1;
        }
        else if(st[j-1]=='1'){
            dp[1][j]=dp[0][j-1]+1;
        }
        else{
            dp[0][j]=dp[1][j-1]+1;
        }
        ans+=max(dp[1][j],dp[0][j]);
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
    return 0;
}
