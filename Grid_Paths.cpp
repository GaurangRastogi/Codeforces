#include <iostream>
#include<vector>
using namespace std;
int mod =1e9+7;

int main(){
    int n,temp;
    cin>>n;
    vector<string>str(n,"");
    for(int i=0;i<n;i++)
        cin>>str[i];

    vector<vector<int>>dp(n,vector<int>(n,0));
    dp[0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(str[i][j]=='*'){
                // out<<i<<" "<<j<<endl;
                dp[i][j]=0;
            }
            else if(i==0&&j==0)
                continue;
            else{
                if(j==0)
                    dp[i][j]=(dp[i-1][j])%mod;
                else if(i==0)
                    dp[i][j]=(dp[i][j-1])%mod;
                else
                    dp[i][j]=(dp[i][j-1]+dp[i-1][j])%mod;
            }
        }
    }
    cout<<dp[n-1][n-1];
    return 0;
}