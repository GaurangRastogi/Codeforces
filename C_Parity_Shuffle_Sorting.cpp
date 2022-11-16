#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n,0);

    for(int i=0;i<n;i++)
        cin>>v[i];
    if(n==1){
        cout<<0<<endl;
        return;
    }
    vector<pair<ll,ll>>vp{{1,n}};
    
    if((v[0]+v[n-1])%2==1){
        v[n-1]=v[0];
    }
    else{
        v[0]=v[n-1];
    }

    ll temp=v[0];
    for(int i=1;i<n-1;i++){
        if((temp+v[i])%2==1){
            v[i]=temp;
            vp.push_back({1,i+1});
        }
        else{
            vp.push_back({i+1,n});
        }
    }
    
    cout<<vp.size()<<endl;
    for(int i=0;i<vp.size();i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }
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