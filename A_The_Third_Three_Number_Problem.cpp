#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    if(n%2) cout<<-1<<endl;
    else cout<<n/2<<" "<<n/2<<" "<<0<<endl;
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