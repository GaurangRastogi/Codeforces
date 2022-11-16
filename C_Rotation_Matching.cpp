#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,mx=INT_MIN,x;
    cin>>n;
    map<ll,ll>mp1{},mp2{};
    for(int i=0;i<n;i++){
        cin>>x;
        mp1[x]=i+1;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        mp2[x]=i+1;
    }
    map<ll,ll>count{};
    for(int i=1;i<=n;i++){
        if(mp1[i]<mp2[i]){
            count[mp2[i]-mp1[i]]++;
        }
        else{
            count[mp2[i]+n-mp1[i]]++;
        }
    } 
    for(auto i:count){
        mx=max(mx,i.second);
    }
    cout<<mx<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    solve();
    return 0;
}