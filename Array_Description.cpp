#include <iostream>
#include<vector>
using namespace std;
int mod = 1e9+7;
 

int main(){
    int n,x,ans=0;
    cin>>n>>x;
    vector<int>array(n+1);
    for(int i=1;i<=n;i++)
        cin>>array[i];

    vector<vector<int>>dp(n+2,vector<int>(x+2,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(i==1){
                //Base case, if i==1 -> then if array[i] =0 it can take any position return 1
                //else if array[i]=j , then return 1
                //else return 0
                if(array[i]==0||array[i]==j)
                    dp[i][j]=1;
                else    
                    dp[i][j]=0;
            }
            else{
                if(array[i]==0||array[i]==j)
                    //if array[i]==0, it can take (j) as expected and return dp[i][j]-> as i-1 
                    //else break it now only
                    dp[i][j]=((dp[i-1][j]+dp[i-1][j-1])%mod+dp[i-1][j+1])%mod;
                
                else
                    dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<=x;i++)
        //ans can take all dp[n][i] -> if last position is 0 then can take 1-x else particular value will be true
        ans=(ans+dp[n][i])%mod;

    cout<<ans;
    return 0;
}