#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    ll n;
    cin>>n;
    vector<ll>b(n-1);
    for(auto &it:b){
        cin>>it;
    }

    vector<ll>a(n,0);
    a[0]=b[0];
    a[n-1]=b[n-2];

    for(int i=1;i<n-1;i++){
        a[i]=min(b[i],b[i-1]);
    }

    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;

    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}