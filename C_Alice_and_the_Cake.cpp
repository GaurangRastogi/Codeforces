#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool solve(){
    ll n,sum=0,op=0;
    cin>>n;
    vector<ll>v(n,0);
    map<ll,ll>mp{};
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        mp[v[i]]++;
    }
    
    priority_queue<ll>pq{};
    pq.push(sum);
    
    while(pq.size()>0&&op<n){
        if(mp[pq.top()]>0){
            mp[pq.top()]--;
            if(mp[pq.top()]==0)
                mp.erase(pq.top());
            pq.pop();
        }
        else{
            if(pq.top()==1)
                return false;
            ll temp=pq.top();
            mp.erase(pq.top());
            pq.pop();
            pq.push(floor((double)temp/2));
            pq.push(ceil((double)temp/2)); 
            op++;
        }
    }

    return mp.size()==0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        if(solve())
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    return 0;
}