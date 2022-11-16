#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,flag=0,i=1,del=-1;
    cin>>n;
    map<ll,ll>mp{};
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]=i;
    }
    ll curr=mp[v[0]];
    while(i<n){
        if(del<i){
            if(v[i-1]>v[i]){
                del=max(del,curr);
            }
        }
        else{
            del=max(del,curr);
        }
        curr=max(mp[v[i-1]],del);
        i++;
    }
    set<ll>st{};
    for(int i=0;i<=del;i++)
        st.insert(v[i]);
    return st.size();
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