#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
   ll n;
   cin>>n;

   vector<ll>a(n),b(n);

   for(auto &it:a)
        cin>>it;

    for(auto &it:b)
        cin>>it;
    
    if(n==1){
        cout<<abs(a[0]-b[0])<<endl;
        return;
    }

    ll mn1=abs(a[0]-b[0]),mn2=abs(a[n-1]-b[n-1]);

    //get a[0] 
    ll a0=INT_MAX;
    for(int i=0;i<n;i++){
        a0=min(a0,abs(a[0]-b[i]));
    }


    //get b[0]
    ll b0=INT_MAX;
    for(int i=0;i<n;i++){
        b0=min(b0,abs(b[0]-a[i]));
    }

    //get a[n-1]
    ll an=INT_MAX;
    for(int i=0;i<n;i++){
        an=min(an,abs(a[n-1]-b[i]));
    }

    //get b[n-1]
    ll bn=INT_MAX;
    for(int i=0;i<n;i++){
        bn=min(bn,abs(b[n-1]-a[i]));
    }

    mn1=min(mn1,a0+b0);
    mn2=min(mn2,an+bn);

    cout<<mn1+mn2<<endl;
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