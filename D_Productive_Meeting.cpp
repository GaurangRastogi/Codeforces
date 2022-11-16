#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,x;
    cin>>n;
    priority_queue<pair<ll,ll>>pq{};
    vector<pair<int,int>>vp{};
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x!=0)
            pq.push({x,i});
    }
    while (pq.size()>1)
    {
        pair<ll,ll>p1=pq.top();
        pq.pop();
        pair<ll,ll>p2=pq.top();
        pq.pop();
        if(p1.first>1){
            pq.push({p1.first-1,p1.second});
        }
        if(p2.first>1){
            pq.push({p2.first-1,p2.second});
        }
        vp.push_back({p1.second,p2.second});
    }
    
    cout<<vp.size()<<endl;
    for(auto i:vp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}