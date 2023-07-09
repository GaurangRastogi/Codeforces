#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    ll mn = INT_MAX, mx = INT_MIN;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    ll diff = mx - mn;
    if (mn >= 0)
    {
        cout << "No" << endl;
        return;
    }

    sort(arr.begin(), arr.end());

    ll l = 0, h = n - 1, k = 0;
    vector<int> ans(n, 0);
    while (l <= h)
    {
        if (sum + arr[h] < diff)
        {
            sum += arr[h];
            ans[k++] = arr[h--];
        }
        else
        {
            sum += arr[l];
            ans[k++] = arr[l++];
        }

        if (sum >= diff)
        {
            cout << "No" << endl;
            return;
        }
        if (sum < 0)
            sum = 0;
    }

    cout << "Yes" << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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