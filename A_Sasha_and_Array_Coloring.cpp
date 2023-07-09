#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
   ll n;
   cin>>n;

   vector<ll>arr(n);

   for(auto &it:arr)
        cin>>it;

    ll l=0,h=n-1,sum=0;

    sort(arr.begin(),arr.end());
    while(l<=h){
        sum+=(arr[h]-arr[l]);
        l++;
        h--;
    }

    cout<<sum<<endl;
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