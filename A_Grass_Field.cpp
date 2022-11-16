#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b+c+d==4)   cout<<2<<endl;
    else if(a+b+c+d>0) cout<<1<<endl;
    else{
        cout<<0<<endl;
    }
   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}