#include <iostream>
#include<vector>
using namespace std;
int mod =1e9+7;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>coins(n,0);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<int>dp(x+1,1e7);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i>=coins[j])
                dp[i]=min(dp[i],1+dp[i-coins[j]]);
        }
    }
    if(dp[x]==1e7)
        cout<<-1;
    else
        cout<<dp[x];
    return 0;
}
