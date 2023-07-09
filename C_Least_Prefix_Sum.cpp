#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//watched solution 
//FML
void solve()
{
    ll n,m;
    cin>>n>>m;

    vector<ll>v(n);
    for(auto &it:v){
        cin>>it;
    }

    vector<ll>p(n,0);
    
    p[0]=v[0];
    for(ll i=1;i<n;i++){
        p[i]=p[i-1]+v[i];
    }
    


    priority_queue<ll>mxPQ;
    priority_queue<ll,vector<ll>,greater<ll>>mnPQ;

    m--;
    ll op=0,val=p[m],val2=p[m];
    for(ll i=m;i>=0;i--){
        while(p[i]<val){
            val-=2*mxPQ.top();
            op++;
            mxPQ.pop();
        }
        mxPQ.push(v[i]);
    }

    for(ll i=m+1;i<n;i++){
        mnPQ.push(v[i]);
        while(p[i]<val2){
            val2+=2*mnPQ.top();
            op++;
            mnPQ.pop();
        }
    }
    cout<<op<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}