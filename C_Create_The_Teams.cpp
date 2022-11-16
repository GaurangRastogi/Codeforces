#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k,count=0;
    cin>>n>>k;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    ll curr=1;
    for(int i=0;i<n;i++){
        if(v[i]*curr>=k){
            count++;
            curr=1;
        }
        else curr++;
    }
    cout<<count<<endl;
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