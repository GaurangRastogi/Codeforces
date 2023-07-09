#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void solve(){
    ll n;
    cin>>n;

    ll a,b,count=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        
        count+=(a>b);
    }

    cout<<count<<endl;
    return ;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}