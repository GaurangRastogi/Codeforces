#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll x,one=0;
    for(int i=0;i<n;i++){
        cin>>x;
        one+=(x==1);
    }

    cout<<n-one+(one/2)+(one%2)<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    cout.flush();
    return 0;
}
