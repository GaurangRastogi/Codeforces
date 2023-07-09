#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve()
{
    ll n;
    cin>>n;

    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }   

    priority_queue<ll,vector<ll>,greater<ll>>pq;
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        pq.push(v[i]);

        while(sum<0){
            sum-=pq.top();
            pq.pop();
        }
    }

    cout<<(int)pq.size()<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}