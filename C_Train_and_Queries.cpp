#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
   ll n,k,x,a,b;
   cin>>n>>k;
   map<ll,pair<ll,ll>>um{};
   for(int i=0;i<n;i++){
        cin>>x;
        if(um[x].first==0){
            um[x].first=i+1;
            um[x].second=i+1;
        }
        else{
            um[x].second=i+1;
        }
   }
   for(int i=0;i<k;i++){
        cin>>a>>b;
        if(um[a].first!=0&&um[b].first!=0&&um[a].first<um[b].second)    
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}