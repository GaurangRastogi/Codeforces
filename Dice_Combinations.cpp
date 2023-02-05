#include <iostream>
#include<vector>
using namespace std;
int mod =1e9+7;

int utility(int n,vector<int>&dp){
    if(dp[n]!=-1)
        return dp[n];
    else{
        dp[n]=0;
        for(int i=1;i<=min(n,6);i++){
            dp[n]=(dp[n]+utility(n-i,dp))%mod;
        }
        return dp[n];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    dp[0]=1;
    utility(n,dp);
    cout<<dp[n];
    return 0;
}
