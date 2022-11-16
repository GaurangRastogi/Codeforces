#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
   ll n,a,b;
   cin>>n;
   unordered_map<ll,ll>um{};
   for(int i=0;i<n;i++){
        cin>>a>>b;
        um[a]=b;
        um[b]=a;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}