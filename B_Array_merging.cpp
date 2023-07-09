#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){

    ll n;
    cin>>n;
    vector<ll>a(n),b(n);

    for(auto &it:a)
        cin>>it;

    for(auto &it:b)
        cin>>it;

    map<ll,ll>um1,um2;
    

    ll ele=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            ele++;
        }
        else{
            um1[a[i-1]]=max(um1[a[i-1]],ele);
            ele=1;
        }
    }
    
    um1[a[n-1]]=max(um1[a[n-1]],ele);

    ele=1;
    for(int i=1;i<n;i++){
        if(b[i]==b[i-1]){
            ele++;
        }
        else{
            um2[b[i-1]]=max(um2[b[i-1]],ele);
            ele=1;
        }
    }
    
    um2[b[n-1]]=max(um2[b[n-1]],ele);


    ll ans=0;
    for(int i=0;i<n;i++){
        // cout<<a[i]<<" "<<um1[a[i]]<<" "<<um2[a[i]]<<endl;
        ans=max(ans,max(um1[a[i]]+um2[a[i]],um1[b[i]]+um2[b[i]]));
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