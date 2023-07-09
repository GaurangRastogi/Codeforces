#include <bits/stdc++.h>
using namespace std;
typedef long double ll;




void solve()
{
    int n;
    ll d,h;
    cin>>n>>d>>h;

    vector<ll>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }

    sort(height.begin(),height.end());

    ll ans=n*d*h;
    for(int i=0;i<n-1;i++){
        ll h1=max(height[i]+h - height[i+1],(ll)0);
        ll d1=(d*h1/h);

        ans-=h1*d1;
    }

    cout<<fixed<<setprecision(6)<<ans/2<<endl;
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