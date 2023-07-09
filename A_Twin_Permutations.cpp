#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){

    ll n;
    cin>>n;
    ll val;
    for(int i=1;i<=n;i++){
        cin>>val;
        cout<<n+1-val<<" ";
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