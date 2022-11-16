#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    map<string,ll>mp{};
    string st;
    vector<string>str;
    for(int i=0;i<n;i++){
        cin>>st;
        mp[st]++;
        str.push_back(st);
    }
    vector<ll>v(n,0);
    string a,b;
    for(int i=0;i<n;i++){
        for(int j=0;j<str[i].size()-1;j++){
            a=str[i].substr(0,j+1);
            b=str[i].substr(j+1,str[i].size()-j-1);
           // cout<<j<<" "<<a<<" "<<b<<" "<<mp[a]<<" "<<mp[b]<<endl;
            if(mp[a]>0&&mp[b]>0){
                v[i]=1;
                break;
            }
        }
        //cout<<v[i]<<endl;
    }
    for(auto i:v)
        cout<<i;
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}