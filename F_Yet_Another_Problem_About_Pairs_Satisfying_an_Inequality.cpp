#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,x,ans=0;
    cin>>n;
    vector<int>v(n,0),u{};
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<i+1)   u.push_back(i+1);
    }
    for(int i=0;i<u.size();i++){
        int low=1,high=u.size(),mid;
        while(low<high){
            mid=(low+high)/2;
            if(u[mid-1]>v[u[i]-1]){
                high=mid-1;
            }
            else if(u[mid-1]<=v[u[i]-1]){
                low=mid+1;
            }
        }
        ans+=low;
        //ans+=lower_bound(u.begin(),u.end(),v[u[i]-1])-u.begin();
    }
    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}