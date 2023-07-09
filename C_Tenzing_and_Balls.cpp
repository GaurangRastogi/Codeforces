#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


unordered_map<ll,vector<ll>>mp;

ll memoization(vector<ll>&arr,ll ind,ll cond,vector<vector<ll>>&dp){
    if(ind>=arr.size())
        return 0;

    else if(dp[ind][cond]!=-1)
        return dp[ind][cond];

    else{
        //leave it
        ll way1=cond+memoization(arr,ind+1,1,dp);

        //take it
        ll way2=INT_MAX;
        
        ll newInd=upper_bound(mp[arr[ind]].begin(),mp[arr[ind]].end(),ind)-mp[arr[ind]].begin();
        
        if(newInd!=mp[arr[ind]].size()){
            way2=memoization(arr,mp[arr[ind]][newInd],0,dp);
        }

        return dp[ind][cond]=min(way1,way2);
    }
}
void solve(){
    ll n;
    cin>>n;

    vector<ll>arr(n);
    mp={};

    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]].push_back(i);
    }

    vector<vector<ll>>dp(n+1,vector<ll>(2,-1));

    ll ans=memoization(arr,0,1,dp);

    cout<<n-ans<<endl;
    return;

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}