#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string str;
    cin >> str;

    vector<vector<ll>> v(10, vector<ll>{});

    ll n = str.size();
    for (int i = 0; i < str.size(); i++)
    {
        v[str[i] - '0'].push_back(i);
    }

    ll m;
    cin >> m;

    string l, h;
    cin >> l >> h;

    ll i = 0, ind = 0;
    while (i < m)
    {
        ll mx = ind;
        for (int x = (l[i] - '0'); x <= (h[i] - '0'); x++)
        {
            // cout << x << " ";
            ll temp = lower_bound(v[x].begin(), v[x].end(), ind) - v[x].begin();
            if (temp == v[x].size())
            {
                cout << "YES" << endl;
                return;
            }
            else
                mx = max(v[x][temp], mx);
        }
        // to go to next-index, since current index is taken
        ind = mx + 1;
        // cout << ind << endl;
        i++;
    }

    cout << "NO" << endl;
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