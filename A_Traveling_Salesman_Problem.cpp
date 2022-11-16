#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,a,b;
    cin>>n;
    ll mnx=0,mny=0,mxx=0,mxy=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        mnx=min(a,mnx);
        mxx=max(a,mxx);
        mny=min(b,mny);
        mxy=max(b,mxy);
    }
    cout<<2*((mxx-mnx)+(mxy-mny))<<endl;
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