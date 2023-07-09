#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;

    vector<ll>arr(n);

    for(ll i=0;i<n;i++)
        cin>>arr[i];

    //for each i make it 0
    ll ans=LLONG_MAX;
    for(int i=0;i<n;i++){
        
        //make previous array
        ll curr,next=0,prev=0,count=0;
        for(ll j=i-1;j>=0;j--){
            curr=next/arr[j]+1;
            next=curr*arr[j];
            count+=curr;
        }

        for(ll j=i+1;j<n;j++){
            curr=prev/arr[j]+1;
            prev=curr*arr[j];
            count+=curr;
        }

        ans=min(ans,count);
    }
    cout<<ans;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
