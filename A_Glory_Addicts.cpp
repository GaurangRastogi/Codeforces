
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,one=0,zero=0,x;
    cin>>n;
    vector<ll>v1{},v2{},v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>x;
        if(v[i]==1){
            v1.push_back(x);
            one++;
        }
        else{
            v2.push_back(x);
            zero++;
        }
    }
    ll mn=min(one,zero),sum=0;
    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(),v2.end(),greater<int>());
    for(int i=0;i<mn;i++){
        sum+=2*(v1[i]+v2[i]);
    }
    for(int i=mn;i<v1.size();i++)
        sum+=v1[i];
    for(int i=mn;i<v2.size();i++)
        sum+=v2[i];
    
    if(one==zero){
        sum-=min(v1[v1.size()-1],v2[v2.size()-1]);
    }
    cout<<sum<<endl;
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