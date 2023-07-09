#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,m;
    cin>>n>>m;

    vector<ll>arr(n),payload(m,0);

    for(auto &it:arr)
        cin>>it;
    
    sort(arr.begin(),arr.end());
    ll sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i]+(payload[i%m]);

        payload[i%m]+=arr[i];

        cout<<sum<<" ";
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    // cin>>t;
    t=1;
    while (t--)
        solve();
    return 0;
}