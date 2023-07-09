#include <bits/stdc++.h>
using namespace std;
const int len=1e6+5;
typedef long long int ll;
bool spf[len];

void solve()
{
    ll n;
    cin>>n;
    
    if(spf[n]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    ll t;
    cin >> t;

    
    memset(spf,false,sizeof(spf));

    // ll k=l;
    for(int i=2;i<=1e3;i++){
        ll sum=1+i;
        ll j=2,curr=i;
        while(true){
            curr*=i;
            sum+=curr;
            if(sum>=len)
                break;
            else
                spf[sum]=true;
            j++;
        }
    }
    while (t--)
    {
        solve();
    }
    return 0;
}