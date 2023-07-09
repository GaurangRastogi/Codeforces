#include<bits/stdc++.h>
#include<iostream>
#include <string>
#include <unordered_set>
using namespace std;
typedef long long int ll;


ll memoization(vector<ll>&arr,ll ind,ll prev,ll n,vector<vector<ll>>&dp){

    if(ind==n){
        return 0;
    }
    else if(dp[ind][(prev+1)%515]!=-1){
        return dp[ind][(prev+1)%515];
    }

    else{

        if(ind-prev<515){
                ll len=memoization(arr,ind+1,prev,n,dp);  //not take current;
                //  abp⊕bp+1<abp+1⊕bp
                if(prev==-1||(arr[prev]^ind)<(arr[ind]^prev)){
                    len=max(len,1+memoization(arr,ind+1,ind,n,dp));
                }
            return dp[ind][(prev+1)%515]=len;
        }
        else{
            ll len=memoization(arr,prev+1,ind,n,dp);
            return dp[ind][(prev+1)%515]=len;
        }
    }

}

void solve(){

    ll n;
    cin>>n;

    vector<ll>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<vector<ll>>dp(n+1,vector<ll>(520,-1));
    
    ll ind=0,prev=-1;
    ll ans=memoization(arr,0,-1,n,dp);

    cout<<ans<<endl;
    return;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}