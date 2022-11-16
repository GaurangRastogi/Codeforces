#include<bits/stdc++.h>
using namespace std;
void query(vector<long long>&v,long long val){
    long long ind=lower_bound(v.begin(),v.end(),val)-v.begin();
    cout<<ind<<" "<<val-v[ind-1]<<endl;
}
void solve(){
    long long n,q,val;
    cin>>n>>q;
    vector<long long>v(n+1,0);
    v[0]=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    for(int i=0;i<q;i++){
        cin>>val;
        query(v,val);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}