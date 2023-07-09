#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k;
    cin>>n>>k;

    cout<<(2+(n-2)/k)<<endl;
    
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