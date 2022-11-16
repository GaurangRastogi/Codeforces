#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,mx=INT_MIN;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]+arr[(i+1)%n]);
    }
    return mx;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    cout<<solve()<<endl;
    return 0;
}