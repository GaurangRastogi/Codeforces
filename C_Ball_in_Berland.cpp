#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll a,b,k,sum=0;
    cin>>a>>b>>k;
    vector<ll>av(k,0),bv(k,0);
    for(int i=0;i<k;i++)
        cin>>av[i];
    for(int i=0;i<k;i++)
        cin>>bv[i];
    map<int,int>ma{},mb{};
    for(int i=0;i<k;i++)
        ma[av[i]]++;
    for(int i=0;i<k;i++)
        mb[bv[i]]++;
    for(int i=0;i<k;i++){
        //cout<
        sum+=(k-ma[av[i]]-mb[bv[i]]+1);
        //cout<<sum<<endl;
    }
    cout<<sum/2<<endl;
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
