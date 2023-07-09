#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll utility(string &str, ll n, ll i, ll j)
{
    ll size=0;
    for(auto ch:str){
        if(ch-'0'==i){
            size++;
            swap(i,j);
        }
    }

    return n-size+(i!=j&&size%2);//to maintain size of length even
}
void solve()
{
    string str;
    cin >> str;

    ll n = str.size();
    ll mn = n;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            ll val = utility(str, n, i, j);
            mn = min(mn, val);
        }
    }
    cout << mn << endl;
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