#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check(vector<ll>&v,ll n,ll k,ll mid){
    ll x=0;
    for(int i=n/2;i<n;i++){
        x+=max(0ll,mid-v[i]);
        if(x>k)
            return 0;
    }
    return 1;
}
ll bin_search(vector<ll>&v,ll n,ll k){
    ll low=1,high=1e10,mid;
    while(low<high){
        mid=(low+high+1)/2;

        if(check(v,n,k,mid))
            low=mid;
        else
            high=mid-1;
    }
    return low;
}
ll solve(){
     ll n,k;
    cin>>n>>k;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    return bin_search(v,n,k);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<solve()<<endl;
    return 0;
}