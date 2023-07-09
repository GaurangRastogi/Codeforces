#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(j-i<n/2)
                cout<<1<<" ";
            
            else if(j-i==n/2)
                cout<<(n%2?1:0)<<" ";
            else
                cout<<-1<<" ";
        }
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