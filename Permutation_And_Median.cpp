#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll l=1,r=n;
    while(l<r){
        cout<<r<<" "<<l<<" ";
        l++;
        r--;
    }
    if(l==r)    cout<<l<<" ";
    cout<<endl;
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