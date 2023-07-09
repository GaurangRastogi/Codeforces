#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    ll n,k;
    cin>>n>>k;

    vector<ll>arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr.begin(),arr.end());
    vector<ll>prefix(n,0),suffix(n,0);

    prefix[0]=arr[0];
    suffix[n-1]=arr[n-1];

    for(int i=1;i<n;i++){
        prefix[i]+=prefix[i-1]+arr[i];
    }

    for(int i=n-2;i>=0;i--){
        suffix[i]+=suffix[i+1]+arr[i];
    }

    // for(int i=0;i<n;i++){
    //     cout<<prefix[i]<<" "<<suffix[i]<<endl;
    // }

    ll mn=0,sum=suffix[0];
    for(int i=0;i<=k;i++){
        // from front 
        ll ps=0,ss=0;
        if(i!=0)
            ps=prefix[2*i-1];

        //from back
        ll left=k-i;
        if(i!=k)
            ss=suffix[n-left];

        // cout<<endl;
        // cout<<i<<" "<<ps<<" "<<ss<<endl;
        mn=max(mn,sum-(ps+ss));

    }
    cout<<mn<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}