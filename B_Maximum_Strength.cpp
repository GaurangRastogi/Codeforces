#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string str1,str2;
    cin>>str1>>str2;

    while(str1.size()<str2.size()){
        str1="0"+str1;
    }
    
    ll i=0,n=str1.size();

    while(i<n&&str1[i]==str2[i])
        i++;
    
    if(i==n){
        cout<<0<<endl;
    }
    else{
        ll ans=(str2[i]-str1[i]);
        i++;
        for(;i<n;i++)
            ans+=9;

        cout<<ans<<endl;
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