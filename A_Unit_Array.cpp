#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin>>n;

    ll breq=n/2-((n/2)%2);
    ll a=0,b=0,val;
    for(int i=0;i<n;i++){
        cin>>val;
        a+=(val==1);
        b+=(val==-1);
    }
    
    ll ans=max(0ll,b-breq);

    if(ans==0)
        ans=b%2;
    cout<<ans<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}