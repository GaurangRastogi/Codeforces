#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n+1);

    for (int i=1;i<=n;i++)
        cin >> arr[i];

    vector<ll> dp(n+1,0); 
    vector<ll>freq(n+1);

    dp[1]=1;
    dp[2]=2;
    freq[1]=1;
    if(n>=2){
        if(arr[1]>=arr[2])
            freq[2]=2;
        else
            freq[2]=1;
    }


    for(int i=3;i<=n;i++){

        if(arr[i]>arr[i-1]){
            dp[i]=dp[i-1]+1;
            freq[i]=1;
        }
        else{
            if(freq[i-1]==1){
                dp[i]=dp[i-1]+1;
            }
            else{
                dp[i]=dp[i-1];
            }
            freq[i]=2;
        }

    }

    ll l,r;
    for(int i=0;i<k;i++){
        cin>>l>>r;
        if(r-l+1<=2){
            cout<<r-l+1<<endl;
        }
        else{
            ll ans=dp[r]-dp[l-1];
            if(dp[l-1]==dp[l+1])
                ans+=2;
            else if(dp[l]==dp[l+1]||dp[l]==dp[l-1])
                ans++;
            cout<<ans<<endl;
        }
    }   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}