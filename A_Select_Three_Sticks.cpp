#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,mn=INT_MAX;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<n-1;i++){
        mn=min(mn,abs(v[i]-v[i-1])+abs(v[i]-v[i+1]));
    }
    return mn;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}