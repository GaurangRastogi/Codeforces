#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

//watched 
ll memoization(vector<ll>&arr,ll ind,ll element,vector<vector<ll>>&dp){
    if(element==0){
        return 0;
    }
    if(ind==0){
        return INT_MIN;
    }
    
    if(dp[ind][element]!=-1)
        return dp[ind][element];
    
    //do nothing
    ll a=memoization(arr,ind-1,element,dp);
    

    //do things
    ll b;
    if(element==1){
        b=arr[ind-1]+(ind)+memoization(arr,ind-1,element-1,dp);
    }
    else if(element==2){
        b=arr[ind-1]+memoization(arr,ind-1,element-1,dp);
    }
    else{
        b=arr[ind-1]-(ind)+memoization(arr,ind-1,element-1,dp);
    }

    return dp[ind][element]=max(a,b);

}

void solve(){
    ll n,m=3;
    cin>>n;
    vector<ll>arr(n);
    for(auto &it:arr){
        cin>>it;
    }

    vector<vector<ll>>dp(n+1,vector<ll>(m+1,-1));

    ll value=memoization(arr,n,m,dp);

    cout<<value<<endl;
    return;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
