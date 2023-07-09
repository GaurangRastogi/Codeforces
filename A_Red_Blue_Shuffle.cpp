#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;



void solve(){
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    
    int countr=0,countb=0;
    
    for(ll i=0;i<n;i++){
        ll one=a[i]-'0';
        ll two=b[i]-'0';

        countr+=(one>two);
        countb+=(two>one);
    }

    if(countr>countb)
        cout<<"RED";
    else if(countb>countr)
        cout<<"BLUE";
    else
        cout<<"EQUAL";
    cout<<endl;
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