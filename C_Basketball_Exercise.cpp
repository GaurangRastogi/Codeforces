#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
// ll memoisation(vector<ll>&a,vector<ll>&b,int ind,int temp,vector<vector<ll>>&dp){
//     if(ind<0){
//         return 0;
//     }
//     if(dp[ind][temp]!=-1)
//         return dp[ind][temp];
    
//     if(temp==0)
//         dp[ind][temp]=a[ind];
//     else 
//         dp[ind][temp]=b[ind];
//     if(ind>1){
//         dp[ind][temp]+=max(memoisation(a,b,ind-1,1-temp,dp),memoisation(a,b,ind-2,1-temp,dp));
//     }
//     else{
//         dp[ind][temp]+=memoisation(a,b,ind-1,1-temp,dp);
//     }
//     return dp[ind][temp];
// }
// void solve(){
//     ll n;
//     cin>>n;
//     vector<ll>b(n,0),a(n,0);

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++){
//         cin>>b[i];
//     }

//     vector<vector<ll>>dp(n+1,vector<ll>(2,-1));
//     ll val1=memoisation(a,b,n-1,0,dp);  
//     ll val2=memoisation(a,b,n-1,1,dp);  
//     // ll val3=memoisation(a,b,n-2,1,dp);
//     // ll val4=memoisation(a,b,n-2,0,dp);

//     cout<<max(val1,val2);;
     
// }
int main(){
    //solve();

    ll n;
    cin>>n;

    vector<vector<ll>>v(2,vector<ll>(n,0));
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    vector<vector<ll>>dp(2,vector<ll>(n,0));

    for(int j=0;j<n;j++){
        for(int i=0;i<2;i++){
            if(j==0)
                dp[i][j]=v[i][j];
            
            else if(j==1){
                dp[i][j]=v[i][j]+dp[1-i][j-1];
            }
            else{
                dp[i][j]=v[i][j]+max(dp[1-i][j-1],dp[1-i][j-2]);
            }
        }
    }

    cout<<max(dp[0][n-1],dp[1][n-1]);
}