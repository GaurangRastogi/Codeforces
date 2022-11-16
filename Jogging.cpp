#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,mod=1e9+7,val=1;
    cin>>n>>x;
    for(int i=1;i<n;i++){
        val=((val%mod)*(2))%mod;
    }
    cout<<(x*val)%mod<<endl;
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