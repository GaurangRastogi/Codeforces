#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,temp;
    cin>>n;

    vector<ll>a(n,0),b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<ll>mn(n,0),mx(n,0);

    for(int i=0;i<n;i++){
        temp=(lower_bound(b.begin(),b.end(),a[i])-b.begin());
        if(temp<n)
            mn[i]=b[temp]-a[i];
    }
    vector<ll>v{};
    for(int i=0;i<n-1;i++){
        if(a[i+1]>b[i])
            v.push_back(i+1);
    }
    // for(auto i:v)
    //     cout<<i<<" ";
    // cout<<endl;

    for(int i=0;i<n;i++){
        temp=upper_bound(v.begin(),v.end(),i)-v.begin();
        //cout<<temp<<" / ";
        if(temp==v.size())
            mx[i]=b[n-1]-a[i];
        else    
            mx[i]=b[v[temp]-1]-a[i];
    }
    //cout<<endl;
    for(auto i:mn)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:mx)
        cout<<i<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    // solve();
    return 0;
}
