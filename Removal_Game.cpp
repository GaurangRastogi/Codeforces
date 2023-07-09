#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;

vector<vector<ll>>dp;


ll memoization(vector<ll>&arr,ll l,ll h){
    if(l>h){
        return 0;
    }
    else if(dp[l][h]!=-1)
        return dp[l][h];

    else{
        //take from front
        ll way1=arr[l]+min(memoization(arr,l+2,h),memoization(arr,l+1,h-1));

        //take from back
        ll way2=arr[h]+min(memoization(arr,l+1,h-1),memoization(arr,l,h-2));

        return dp[l][h]=max(way1,way2);
    }
}
int main(){
    ll n;
    cin>>n;

    dp.resize(n,vector<ll>(n,-1ll));

    vector<ll>arr(n);

    for(int i=0;i<n;i++)   
        cin>>arr[i];

    memoization(arr,0,n-1);

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[0][n-1]<<endl;

    return 0;
}