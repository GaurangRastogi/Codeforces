#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//idont_hatephy
void solve(){
    ll n,m,count=0;
    cin>>n>>m;
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    vector<vector<char>>arr(n+1,vector<char>(m+1,'\0'));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]=='*')
                dp[i][j]=1;
        }
    }
    for(int i=n-1;i>0;i--){
        for(int j=m-1;j>1;j--){
            if(dp[i][j]==1)
                dp[i][j]+=min(min(dp[i+1][j],dp[i+1][j-1]),dp[i+1][j+1]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            count+=dp[i][j];
        }
    }
    cout<<count<<endl;
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