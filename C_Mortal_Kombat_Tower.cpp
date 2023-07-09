#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll memoization(vector<ll>&arr,ll n,ll ind,ll id,vector<vector<ll>>&dp){
    if(ind>=n)
        return 0;

    else if(dp[ind][id]!=-1)
        return dp[ind][id];

    else{
        dp[ind][id]=INT_MAX;

        //take one
        ll one=memoization(arr,n,ind+1,1-id,dp)+(arr[ind]&(id==0));

        //take two if possible
        ll two=INT_MAX;
        if(ind+1<n)
            two=memoization(arr,n,ind+2,1-id,dp)+(arr[ind]&(id==0))+(arr[ind+1]&(id==0));

        dp[ind][id]=min(one,two);

        return dp[ind][id];
    }
}
void solve(){
    ll n;
    cin>>n;
    
    vector<ll>arr(n);
    for(auto &it:arr)
        cin>>it;

    
    //0->friend,1->you
    vector<vector<ll>>dp(n,vector<ll>(2,-1));

    //friend will call
    ll ans=memoization(arr,n,0,0,dp);

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