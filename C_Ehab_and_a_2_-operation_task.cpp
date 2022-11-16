#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

//forgot to print number of operation
//got error lol
void solve(){
    ll n,x,mod;
    cin>>n;
    mod=n+1;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    ll suffix=0,val;
    cout<<n+1<<endl;
    for(int i=n;i>=1;i--){
        v[i]+=suffix;
        if(i>=v[i]%mod)
            val=i-v[i]%mod;
        else
            val=(n+1)-(v[i]%mod-i);

        if(val<0)
            val+=n+1;

        cout<<1<<" "<<i<<" "<<val<<endl;
        suffix+=val;
    }
    cout<<2<<" "<<n<<" "<<mod;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}