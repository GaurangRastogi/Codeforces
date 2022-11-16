#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m,curr=0,sum=0;
    cin>>n>>m;
    vector<ll>v(m,0ll);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<ll>diff{};
    for(int i=0;i<m;i++){
        if(i==m-1){
            diff.push_back(n+v[0]-v[i]-1);
        }
        else{
            diff.push_back(v[i+1]-v[i]-1);
        }
    }
    sort(diff.begin(),diff.end(),greater<int>());
    for(int i=0;i<diff.size();i++){
        //cout<<diff[i]<<" ";
        if((diff[i]-curr)==1){
            sum++;
            break;
        }
        sum+=max(0ll,diff[i]-curr-1);
        curr+=4;
    }
    cout<<n-sum<<endl;
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