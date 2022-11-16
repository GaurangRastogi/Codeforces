#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,ans;
    cin>>n;
    ans=n;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0&&__gcd(i,n/i)==1)
            ans=n/i;
    }
    cout<<n/ans<<" "<<ans<<endl;
    return;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    solve();
    return 0;
}