#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    ll n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;

    ll r1=min(x2,n-x2+1);

    ll q1=min(y2,n-y2+1);

    ll r2=min(x1,n-x1+1);
    
    ll q2=min(y1,n-y1+1);

    cout<<abs(min(r1,q1)-min(r2,q2))<<endl;
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