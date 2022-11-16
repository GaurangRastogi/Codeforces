#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,count=0;
    cin>>n;
    vector<ll>v(n,0),temp(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        temp[i]=v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]!=temp[i])
            count++;
    }
    if(count<=2)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}