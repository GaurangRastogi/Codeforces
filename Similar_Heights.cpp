#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,count=0;
    cin>>n;
    unordered_map<ll,ll>mp{};
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[v[i]]==1) count++;
    }
    if(count==1){
        sort(v.begin(),v.end());
        if(mp[v[n-1]]==1){
            for(auto i:v){
                if(mp[i]>2){
                    cout<<1<<endl;
                    return;
                }
            }
            cout<<2<<endl;
            return;
        }
    }
    if(count%2==1)  cout<<count/2+1<<endl;
    else cout<<count/2<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}