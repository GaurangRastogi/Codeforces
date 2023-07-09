#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, x, k;
    cin >> n >> k >> x;

    if (k == 1 || (k == 2 && x == 1 && n % 2))
    {
        cout << "NO" << endl;
        return;
    }
    else if (x != 1)
    {
        cout<<"YES"<<endl;
        cout << n << endl;

        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout << n / 2 << endl;
        if (n % 2)
        {
            cout << 3 << " ";
            n -= 3;
        }
        while (n > 0)
        {
            cout << 2 << " ";
            n -= 2;
        }
        cout << endl;
    }

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