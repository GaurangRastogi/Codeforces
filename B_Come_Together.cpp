#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll xa,ya;
    ll xb,yb;
    ll xc,yc;
    
    cin>>xa>>ya>>xb>>yb>>xc>>yc;


    //x
    ll diffxb=xb-xa;
    ll diffxc=xc-xa;

    ll ans1=0;
    if((diffxb  > 0  && diffxc< 0)|| (diffxc > 0 && diffxb<0))
        ans1=0;
    else{
        ans1=min(abs(diffxb),abs(diffxc));
    }


    //y
    ll diffyb=yb-ya;
    ll diffyc=yc-ya;
    ll ans2=0;
    if((diffyb  > 0  && diffyc< 0)|| (diffyc > 0 && diffyb<0))
        ans2=0;
    else{
        ans2=min(abs(diffyb),abs(diffyc));
    }

    cout<<ans1+ans2+1<<endl;
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