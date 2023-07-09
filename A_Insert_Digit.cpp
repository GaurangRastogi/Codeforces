#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    string str;

    ll n,d,flag=0;
    cin>>n>>d;
    cin>>str;

    string ans="";
    for(int i=0;i<n;i++){
        if(!flag&&d>str[i]-'0'){
            ans+=to_string(d);
            flag=1;
        }
        ans+=str[i];
    }
    if(!flag){
        ans+=to_string(d);
        flag=1;
    }
    cout<<ans<<endl;
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