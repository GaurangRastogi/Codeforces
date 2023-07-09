#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,k;
    cin>>n>>k;

    string base_str="";
    for(int i=0;i<k;i++){
        for(int j=i;j<k;j++){
            base_str+='a'+j;
            base_str+='a'+i;
        }
    }

    cout<<base_str<<endl;
    ll len=base_str.size();

    ll times=n/len,sub=n%len;

    string ans="";
    while(times--){
        ans+=base_str;
    }

    ans+=base_str.substr(0,sub);

    cout<<ans<<endl;
    return;

}
int main(){
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}