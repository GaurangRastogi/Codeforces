#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());

    return v[n-1]+v[n-2]-v[0]-v[1];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        // cout<<t<<" ";
        cout<<solve()<<endl;
    }
    return 0;
}


