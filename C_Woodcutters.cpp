#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 

void solve(){

    ll n;
    cin>>n;

    vector<ll>x(n),h(n);
    
    for(int i=0;i<n;i++)
        cin>>x[i]>>h[i];

    
    ll left=x[0],count=min(n,2ll);
    for(int i=1;i<n-1;i++){
        if(x[i]-h[i]>left){
            // cout<<i<<" l ";
            count++;
            left=x[i];
        }
        else if(i+1<n&&x[i]+h[i]<x[i+1]){
            // cout<<i<<" r ";
            count++;
            left=x[i]+h[i];
        }
        else{
            left=x[i];
        }
    }
    cout<<count<<endl;
}    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    return 0;
}