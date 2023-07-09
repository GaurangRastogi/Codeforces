#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 

void solve(){
    string n;
    ll s;
    cin>>n>>s;

    ll sum=0;
    for(auto ch:n){
        sum+=(ch-'0');
    }

    string ans="";
    ll flag=0;
    for(int i=n.size()-1;i>=0;i--){
        ll val=n[i]-'0';

        if(sum>val){
            sum-=val;
            ans=
        }
        else{
            ans=('0'+sum)+val;
            sum=0;
            break;
        }
    }
    cout<<ans<<endl;
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