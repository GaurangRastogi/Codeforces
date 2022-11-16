#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,x,a,b;
    cin>>n;
    int mx=INT_MIN,mn=INT_MAX,count=0;
    vector<pair<pair<ll,ll>,pair<ll,ll>>>vp{{{-1,0},{mx,mn}}};
    pair<ll,ll>p;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        count=0;
        p=vp.back().first
        if(b>p.first)   
        vp.push_back({{i,count},{mx,mn}});

    }

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