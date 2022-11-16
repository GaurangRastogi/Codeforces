#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,k,x,mx=0;
    cin>>n>>k;
    map<ll,ll>mp{};
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
        mx=max(mx,mp[v[i]]);
    }

    if(n<k||mx>k){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    int curr=1;
    vector<ll>ans(n,0);
    for(auto i:mp){
        for(int l=0;l<n;l++){
            if(v[l]==i.first){
                ans[l]=curr;
                v[l]=-1;
                curr++;
                if(curr==k+1)
                    curr=1;
            }
        }
    }

    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}