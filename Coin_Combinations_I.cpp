#include <iostream>
#include<vector>
using namespace std;
int mod =1e9+7;
 
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<int>dp(x+1);
    dp[0]=1;
    for(int i=0;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i>=coins[j])
                dp[i]=(dp[i]+dp[i-coins[j]])%mod;
        }
    }
    cout<<dp[x];
    return 0;
}