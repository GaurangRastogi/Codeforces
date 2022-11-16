#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,x;
    cin>>n;
    ll j=n-1,mn=n;
    vector<ll>a(n,0ll),b(n,0ll);
    map<ll,ll>mp{},mp2{};
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        mp2[x]=i;
    }
    for(int i=2*n;i>0&&j>=0;i-=2,j--){
        //cout<<mp2[i]<<" "<<i<<endl;
        b[j]=min(mn,mp2[i]);
        mn=min(mn,b[j]);
    }
    // for(int i=0;i<n;i++)
    //     cout<<b[i]<<"/ ";
    // cout<<endl;
    ll ans=INT_MAX,temp;
    for(int i=0;i<n;i++){
        //cout<<a[i]<<" "<<(a[i]+1)/2-1<<endl;
        temp=mp[a[i]]+b[(a[i]+1)/2-1];
        ans=min(temp,ans);
    }
    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}