#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n,a,b,curr=1e9;
    cin>>n;
    priority_queue<pair<ll,ll>>pq;
    map<ll,ll>mp{};
    set<ll>st;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            cin>>b;
            pq.push({b,curr});
            st.insert(i+1);
            curr--;
        }
        else if(a==2){
            cout<<*st.begin()<<" ";
            mp[*st.begin()]=1;
            st.erase(st.begin());
        }
        else{
            //cout<<"\nprint"<<pq.top().first<<" "<<pq.top().second<<endl;
            while(mp[1e9-pq.top().second+1]==1){
                pq.pop();
            }
            cout<<1e9-pq.top().second+1<<" ";
            st.erase(1e9-pq.top().second+1);
            pq.pop();
        }
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}