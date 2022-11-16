#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
    if(a==0)    return b;
    if(b==0)    return a;
    if(a>b) return gcd(a%b,b);
    return gcd(a,b%a);
}
void solve(){
    ll n,mn=LONG_LONG_MAX,y=0;
    cin>>n;
    ll arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll mx=*max_element(arr,arr+n);
    ll g=mx-arr[0];
    for(int i=1;i<n;i++){
        g=gcd(g,mx-arr[i]);
    }
    cout<<(mx*n-sum)/g<<" "<<g<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  
    solve();
    return 0;
}