#include<bits/stdc++.h>
#include<iostream>
#include <string>
#include <unordered_set>
using namespace std;
typedef long long int ll;
const ll len = 3e5+1;


void solve(){

    ll m,n,val;
    cin>>m;

    map<int,int>mp;
    for(int i=0;i<m;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>val;
            mp[val]=i;
        }
    }
 
    vector<int>v(m,-1);

    for(auto i:mp){
        v[i.second]=i.first;
    }

    for(int i=0;i<m;i++){
        if(v[i]==-1){
            cout<<-1<<endl;
            return;
        }
    }

    for(auto i:v){
        cout<<i<<" ";
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