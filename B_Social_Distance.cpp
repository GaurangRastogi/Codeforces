#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,m;
    cin>>n>>m;

    vector<ll>free(n);
    for(int i=0;i<n;i++){
        cin>>free[i];
    }
    sort(free.begin(),free.end());
   
    ll req=n;
    for(int i=0;i<n;i++){
        ll a=free[i];
        ll b=free[(i+1)%n];
        req+=max(a,b);
    }

    if(req<=m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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
