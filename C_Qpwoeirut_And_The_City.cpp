#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,ans=0,prefix_sum=0,suffix_sum=0,a=1,b=2;
    cin>>n;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++)
        cin>>v[i];
    if(n%2==1){
        for(int i=1;i<=n;i++){
            if(i%2==0){
                ans+=max(0ll,max(v[i-1],v[i+1])-v[i]+1);
            }
        }
    }
    else{
        for(int i=1;i<n;i++){
            if(i<a&&i%2==0)
                prefix_sum+=max(0ll,max(v[i-1],v[i+1])-v[i]+1);
            if(i>b&&i%2==1)
                suffix_sum+=max(0ll,max(v[i-1],v[i+1])-v[i]+1);
        }
        ans=prefix_sum+suffix_sum;
        while(b<n){
            prefix_sum+=max(0ll,max(v[b-1],v[b+1])-v[b]+1);
            b+=2;
            a+=2;
            suffix_sum-=max(0ll,max(v[a-1],v[a+1])-v[a]+1);
            ans=min(ans,prefix_sum+suffix_sum);
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}