#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;


    ll sum=(n*(n+1))/2,mod=1e9+7;

    if(sum%2){
        cout<<0<<endl;
        return 0;
    }
    
    sum/=2;
    vector<vector<ll>>dp(n+1,vector<ll>(sum+1,0));

    //initlialization
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(i<=j){
                dp[i][j]=(dp[i-1][j-i]+dp[i-1][j])%mod;
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }


    //we can't directly divide by 2, instead mutliply it by modulo inverse of 2 mod 1e9 
    // that is  (2*?)%mod =1
    // ? = 500000004
    cout<<(dp[n][sum]*500000004)%mod<<endl;

    return 0;
}