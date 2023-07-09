#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;

    vector<ll>arr(n);
    for(auto &it:arr)
        cin>>it;

    sort(arr.begin(),arr.end());

    vector<ll>ans(n);
    vector<ll>visited(n,0);
    visited[n-1]=1;
    ans[0]=arr[n-1];
    ll gcd=ans[0];
    ll ind=1;

    while(ind<n){
        ll mx=1;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                ll temp=__gcd(gcd,arr[i]);
                mx=max(mx,temp);
            }
        }

        for(int i=0;i<n;i++){
            if(!visited[i]&&mx==__gcd(gcd,arr[i])){
                visited[i]=1;
                ans[ind++]=arr[i];
            }
        }
        gcd=mx;
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
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