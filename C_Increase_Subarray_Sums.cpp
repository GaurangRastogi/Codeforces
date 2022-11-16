#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve2(unordered_map<ll,ll>&vp,ll &x,ll &k){
    ll mx=0,temp;
    for(auto i:vp){
        temp=min(i.first,k)*x+i.second;
        //cout<<temp<<endl;
        mx=max(mx,temp);
    }
    cout<<mx<<" ";
}
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n,0);
    unordered_map<ll,ll>um{};
    for(int i=0;i<n;i++){
        cin>>v[i];
        um[i+1]=INT_MIN;
    }   
    ll sum,temp;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=v[j];
            temp=um[j-i+1];
            um[j-i+1]=max(temp,sum);
        }
    }
    for(ll i=0;i<=n;i++){
        solve2(um,x,i);
    }
    cout<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}