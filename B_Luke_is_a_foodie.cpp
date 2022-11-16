#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,x,count=0,curr=0,mn,mx;
    cin>>n>>x;
    vector<ll>v(n,0ll);
    for(int i=0;i<n;i++)
        cin>>v[i];
    mx=v[0];
    mn=v[0];
    for(int i=1;i<n;i++){
        mx=max(mx,v[i]);
        mn=min(mn,v[i]);
        if(mx-mn<=2*x){
            //count++;
            continue;
        }
        else{
            count++;
            mx=v[i];
            mn=v[i];
        }
    }
    cout<<count<<endl;
    return;
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