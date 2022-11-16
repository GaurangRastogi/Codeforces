#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//referred 
ll solve(){
    ll n,ans=0;
    cin>>n;
    vector<ll>v(n,0ll);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    for(int i=0;i<n-1;i++){
        ans+=abs(v[i+1]-v[i]);
    }

    ll mn=min(ans-abs(v[1]-v[0]),ans-abs(v[n-1]-v[n-2]));

    for(int i=1;i<n-1;i++){
        mn=min(mn,ans-abs(v[i-1]-v[i])-abs(v[i+1]-v[i])+abs(v[i-1]-v[i+1]));
    }
    return mn;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
    return 0;
}
