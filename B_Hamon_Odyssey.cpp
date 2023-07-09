#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;

    ll val,curr=0,count=0;
    for(int i=0;i<n;i++){
        cin>>val;
        
        if(curr==0){
            curr=val;
        }

        curr&=val;
        if(curr==0){
            count++;
        }
    }

    cout<<max(1ll,count)<<endl;
    return;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}