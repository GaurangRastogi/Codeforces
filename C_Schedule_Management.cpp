#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m,x;
    cin>>n>>m;
    vector<ll>v(m,0);
    for(ll i=0;i<m;i++){
        cin>>x;
        v[x-1]++;
    }
    ll l=1,h=m,sum,mn=m;
    while(l<h){
        //cout<<l<<" "<<h<<" ";
        x=l+(h-l)/2;
        sum=0;
        for(ll i=0;i<n;i++){
            if(x>v[i])
                sum+=(x-v[i])/2;
            else sum-=v[i]-x;
        }
        //cout<<sum<<endl;
        if(sum>=0){ 
            h=x;
        }
        else l=x+1;
    }
    cout<<l<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}