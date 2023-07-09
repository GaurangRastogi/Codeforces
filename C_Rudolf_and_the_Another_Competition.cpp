#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;

    vector<pair<ll,ll>> arr;

    vector<ll> v(m, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[j];
        }

        ll sum = 0, j = 0, pen = 0;

        sort(v.begin(), v.end());

        while (j < m && sum + v[j] <= h)
        {
            sum += v[j];
            pen += sum;
            j++;
        }
       
        arr.push_back({j,pen});
    }

    ll rnk=1;
    ll cnt=arr[0].first;
    ll pen=arr[0].second;

    for(int i=1;i<n;i++){
        if(arr[i].first>cnt)
            rnk++;
        else if(arr[i].first==cnt && arr[i].second<pen)
            rnk++;
    }

    cout<<rnk<<endl;
    return;
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