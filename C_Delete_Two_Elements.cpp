#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){    
    ll n,sum=0,mn,ans=0;
    cin>>n;
    vector<ll>v(n,0);
    map<ll,ll>mp{};
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        mp[v[i]]++;
    }
    if(2*sum%n!=0)
        return 0;
    else{
        mn=2*sum/n;
        for(int i=0;i<n;i++){
            mp[v[i]]--;
            ans+=mp[mn-v[i]];
        }
    }
    return ans;
}  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}