#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];

        c[i] *= (i + 1);
    }

    ll mn=c[n-1];

    for(int i=0;i<n-1;i++){
        mn=min(mn,c[0]+c[n-(i+1)]);
    }


    if(n==2){
        cout<<2ll*c[n-1]<<endl;
    }
    else if(n==3){
        cout<<c[n-1]+mn<<endl;
    }
    else{
        cout<<2ll*mn<<endl;
    }

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