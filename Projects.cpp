#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
vector<ll>dp;
vector<ll>arr;
ll n;


ll memoization(vector<vector<ll>>&vp,int ind){
    if(ind==n)
        return 0ll;

    else if(dp[ind]!=-1)
        return dp[ind];
    
    else{
        //leave it
        ll way1=memoization(vp,ind+1);

        //way2
        ll way2=vp[ind][2];

        ll new_ind=upper_bound(arr.begin(),arr.end(),vp[ind][1])-arr.begin();

        way2+=memoization(vp,new_ind);

        return dp[ind]=max(way1,way2);
    }
}

int main(){
    ll a,b,c;
    cin>>n;

    vector<vector<ll>>vp(n);

    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        vp[i]={a,b,c};
    }


    sort(vp.begin(),vp.end());

    for(auto v:vp){
        arr.push_back(v[0]);
    }

    dp.resize(n+1,-1ll);

    cout<<memoization(vp,0)<<endl;

    return 0;
}