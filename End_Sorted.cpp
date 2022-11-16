#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n,flag=0,x;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=0;i<n;i++){
        cin>>x;
        v[x]=i+1;
    }
    if(v[1]>v[n]){
        flag=-1;
    }
    cout<<v[1]-1+n-v[n]+flag<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}