#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;



void solve(){
    ll n;
    cin>>n;
    
    map<ll,ll>mp;
    
    ll count=1,val;

    for(int i=1;i<n;i++){
        cin>>val;
        mp[val]++;
    }

    ll mFreq=0;
    for(auto it:mp){
        mFreq=max(mFreq,it.second);
    }

    count+=max(mFreq,(ll)mp.size());
    cout<<count<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}