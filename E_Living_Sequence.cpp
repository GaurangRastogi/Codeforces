#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll countNumbersWithOut4(ll n)
{
    ll ans=0;
    string s=to_string(n);
    ll m=s.size();
    for(int i=0;i<m;i++){
        ll digit=s[i]-'0';
        ll count=0;
        if(digit<=4)
            count=digit;
        else
            count=digit-1;

        count=count*pow(9,m-i-1);
        ans+=count;

        if(s[i]=='4')
            break;

        if(i==m-1)
            ans++;
    }
    return ans-1;
}


void solve(){
    ll k;
    cin>>k;

    ll l=0,h=1e14;
    while (l+1<h)
    {
        ll mid=(l+h)/2;
        
        ll count=countNumbersWithOut4(mid);
        // cout<<l<<" "<<h<<" "<<mid<<" "<<count<<endl;
        if(count<k){
            l=mid;
        }
        else{
            h=mid;
        }
    }
    cout<<h<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}