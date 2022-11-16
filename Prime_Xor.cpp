#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll x,y,z,b,c,a;
    cin>>x>>y;
    z=x^y;
    if(x%2==0){
        c=2;
        a=z^c;
        b=y^c;
    }
    else if(y%2==0){
        a=2;
        b=x^a;
        c=z^a;
    }
    else{
        b=2;
        a=x^b;
        c=y^b;
    }
    if(a<b&&a<c){
        if(b<c) cout<<a<<" "<<b<<" "<<c;
        else cout<<a<<" "<<c<<" "<<b;
    }
    else if(b<a&&b<c){
        if(a<c) cout<<b<<" "<<a<<" "<<c;
        else cout<<b<<" "<<c<<" "<<a;
    }
    else{
        if(a<b) cout<<c<<" "<<a<<" "<<b;
        else cout<<c<<" "<<b<<" "<<a;
    }
    cout<<endl;
    return;
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