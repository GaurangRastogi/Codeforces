#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,j;
    cin>>n;
    vector<ll>v(n,0);
    cout<<2<<endl;
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
        j=i*2;
        while(j<=n){
            cout<<j<<" ";
            j*=2;
        }
    }
    cout<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}