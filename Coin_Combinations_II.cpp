#include <iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
int mod =1e9+7;

int main(){
    int n,x,val;
    cin>>n>>x;
    vector<int>coins;
    for(int i=0;i<n;i++){
        cin>>val;
        coins.push_back(val);
    }
    // sort(coins.begin(),coins.end());
    vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(coins[i-1]<=j)
                dp[i][j]=(dp[i-1][j]+dp[i][j-coins[i-1]])%mod;
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    
    cout<<dp[n][x];
    return 0;
}