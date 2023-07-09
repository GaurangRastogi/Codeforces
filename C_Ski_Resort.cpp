#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,k,mx;
    cin>>n>>k>>mx;

    ll ans=0,count=0;
    
    ll val;
    for(int i=0;i<n;i++){
        cin>>val;

        if(val<=mx){
            count++;
        }
        else{
            count=0;
        }

        if(count>=k){
            ans+=(count-k+1);
        }
    }

    cout<<ans<<endl;
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