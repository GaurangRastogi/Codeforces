#include <iostream>
#include<vector>
using namespace std;
int mod =1e9+7;

int main(){
    int n,temp;
    cin>>n;
    
    vector<int>dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        temp=i;
        while(temp){
            dp[i]=min(dp[i],dp[i-temp%10]+1);
            temp/=10;
        }
        
    }
    cout<<dp[n];
    return 0;
}