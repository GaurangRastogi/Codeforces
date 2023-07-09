#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll>factorial(17,1ll);

ll backtrack(ll n,ll ind){
    if(ind==17){  
        int count=0;

        while(n!=0){
            n=n&(n-1);
            count++;
        }
        return count;
    }

    ll mn=backtrack(n,ind+1);

    mn=min(mn,1ll+backtrack(n-factorial[ind],ind+1));
    return mn;
}
void solve(){
    ll n;
    cin>>n;

    ll ans=backtrack(n,1);
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(ll i=1;i<=16;i++){
        factorial[i]=factorial[i-1]*i;
    }

    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}