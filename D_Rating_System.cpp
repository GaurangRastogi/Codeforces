#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin>>n;
    
    ll maxi=0,ans=0,curr,diff=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>curr;
        sum+=curr;

        maxi=max(maxi,sum);
        if(diff<maxi-sum){
            diff=maxi-sum;
            ans=maxi;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}