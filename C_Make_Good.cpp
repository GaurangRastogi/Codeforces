#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,sum=0,x_or=0;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        x_or^=v[i];
    }
    cout<<2<<endl<<x_or<<" "<<(x_or+sum)<<endl;
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