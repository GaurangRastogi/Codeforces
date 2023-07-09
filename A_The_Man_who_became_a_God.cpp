#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    priority_queue<ll>pq;
    for(int i=1;i<n;i++){
        pq.push(abs(v[i]-v[i-1]));
    }

    while((k--)>1){
        pq.pop();
    }

    ll sum=0;
    while(pq.size()){
        sum+=pq.top();
        pq.pop();
    }
    
    cout<<sum<<endl;
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