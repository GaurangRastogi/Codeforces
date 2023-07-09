#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1e9 + 7;
const ll n=1e6+2;

int main()
{
    ll dp[n][2];

    dp[0][0] = dp[0][1] = 1;

    // 0 -> disjoint , 1 -> connected

    for (int i = 1; i < n; i++)
    {

        // way 1 i-1 was disjoint

        // keeping disjoing
        ll op1 = (dp[i - 1][1] + dp[i - 1][0]) % mod;

        // keep both extend
        ll op2 = (dp[i - 1][0]);

        // keep any one extended
        ll op3 = (2ll * dp[i - 1][0]) % mod;

        dp[i][0] = (op1 + op2 + op3) % mod;

        // way 2 => i-1 connected

        // keep two disconnected
        ll op4 = (dp[i - 1][0] + dp[i - 1][1]) % mod;

        // keep connected
        ll op5 = (dp[i - 1][1]) % mod;

        dp[i][1] = (op4 + op5) % mod;
    }

    ll t, N;
    cin >> t;

    while (t--)
    {
        cin >> N;
        cout << (dp[N - 1][0] + dp[N - 1][1]) % mod << endl;
    }
    return 0;
}