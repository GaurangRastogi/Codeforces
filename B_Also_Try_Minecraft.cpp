#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n,0ll);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>prefix(n,0ll);
    vector<ll>suffix(n,0ll);
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            prefix[i]=prefix[i-1];
        }
        else{
            prefix[i]+=v[i]-v[i-1]+prefix[i-1];
        }
    }
    for(int i=n-2;i>=0;i--){
        //cout<<v[i]<<" "<<v[i+1]<<" ";
        if(v[i]>=v[i+1]){
            suffix[i]=suffix[i+1];
        }
        else{
            suffix[i]+=-v[i]+v[i+1]+suffix[i+1];
        }
        //cout<<suffix[i]<<endl;
    }
    ll a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        if(a<b)
            cout<<prefix[a-1]-prefix[b-1]<<endl;
        else 
            cout<<suffix[b-1]-suffix[a-1]<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}