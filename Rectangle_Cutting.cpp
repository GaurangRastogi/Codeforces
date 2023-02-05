#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j]=1+min(dp[n-i][m]+dp[i][m-j],dp[n-i][j]+dp[n][m-j]);
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}