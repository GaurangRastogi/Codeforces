#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n,mx=0;
    cin>>n;
    vector<int>a(n,0),b(n,0);
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        mx=max(mx,b[i]);
    }
    if(n==1){
        cout<<a[0]<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        int p=max(a[i]-mx+b[i],0);
        int q=a[i]+mx-b[i];
        vp.push_back({p,q});
    }
    sort(vp.begin(),vp.end());
    int mn=INT_MAX;
    for(int i=0;i<n-1;i++){
        mn=min(mn,vp[i].second);
    }
    int val=mn+vp[n-1].first;
    if(vp[n-1].first<mn){
        cout<<vp[n-1].first<<endl;
    }
    else if(val%2==1){
        cout<<val/2<<".5"<<endl;
    }
    else{
        cout<<val/2<<endl;
        
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

