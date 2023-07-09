#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 

void solve( ){
    
    ll x,k;
    cin>>x>>k;

    if(x%k){
        cout<<1<<endl<<x<<endl;
    }
    else{
        cout<<2<<endl<<x-1<<" "<<1<<endl;
    }
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