#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    map<int,vector<int>>mp{};
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mn=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j;k<j;k++){
                if(v[k]==mn)    mn++;
                mp.push_back()
            }
        }
    }
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