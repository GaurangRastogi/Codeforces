#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll m, n;
    cin >> m >> n;

    vector<ll> row(m - 1), col(n - 1);

    for (int i = 0; i < m - 1; i++)
        cin >> row[i];

    for (int i = 0; i < n - 1; i++)
        cin >> col[i];

    sort(row.begin(), row.end(), greater<ll>());
    sort(col.begin(), col.end(), greater<ll>());

    ll i = 0, j = 0, cost = 0;
    ll cr = 1, cc = 1;
    while (i < m - 1 && j < n - 1)
    {

        if (row[i] >= col[j])
        {
            cost += cr * row[i];
            cc++;
            i++;
        }

        else
        {
            cost += cc * col[j];
            cr++;
            j++;
        }
    }

    while (i < m - 1)
    {
        cost += cr * row[i];
        cc++;
        i++;
    }

    while (j < n - 1)
    {
        cost += cc * col[j];
        cr++;
        j++;
    }

    cout<<cost<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}