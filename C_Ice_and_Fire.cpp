#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
   
   ll n,i=0;
   cin>>n;

   string str;
   cin>>str;

   ll ans=1;
   cout<<1<<" ";
   for(int i=1;i<n-1;i++){
    if(str[i]!=str[i-1]){
        ans=i+1;
    }
        cout<<ans<<" ";
   }

   cout<<endl;
   return;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}