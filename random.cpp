#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);

    for (auto &it : arr)
        cin >> it;

    vector<ll> dp(n,0); 
    dp[0]=1;
    if(n>1)
        dp[1]=2;
    for(int i=2;i<n;i++){
        if(arr[i-2]>=arr[i-1]&&arr[i-1]>=arr[i]){
            dp[i]=dp[i-1];
        }
        else{
            dp[i]=1+dp[i-1];
        }
    }

    ll l,r;
    for(int i=0;i<k;i++){
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]+1<<endl;
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}