#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,x,a,b;
    cin>>n;
    map<ll,ll>um{};
    for(int i=0;i<n;i++){
        cin>>x;
        um[x]++;
    }
    ll mx=0,flag=n%2;
    for(auto i:um){
        //cout<<i.second<<" ";
        mx=max(mx,i.second);
    }
    if(flag==1)
        mx--;
    cout<<max(0ll,2*(mx-n/2))+flag<<endl;
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