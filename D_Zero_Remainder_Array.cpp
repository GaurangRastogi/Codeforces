#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k,x,val=0,mx=0;
    cin>>n>>k;
    map<ll,ll>um{};
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%k)
            um[k-x%k]++;
    }
    for(auto i:um){
        //cout<<i.first<<" "<<i.second<<endl;
        if(i.second>mx){
            mx=i.second;
            val=i.first;
        }
        else if(i.second==mx){
            val=max(i.first,val);
        }
    }
    if(mx==0)
        cout<<0<<endl;
   else cout<<(mx-1)*(k)+val+1<<endl;
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