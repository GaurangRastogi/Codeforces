#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    string str;
    cin>>str;
    ll n=str.size(),count,curr,mnCount=INT_MAX;

    for(int i=0;i<26;i++){
        curr=0;
        count=0;
        for(int j=0;j<n;j++){
            // cout<<i<<" "<<str[j]-'a'<<" ";
            if(i==str[j]-'a'){
                count=max(count,curr);
                curr=0;
            }
            else{
                curr++;
            }
        }
        count=max(count,curr);
        // cout<<endl<<count<<"\n";
        mnCount=min(mnCount,count);
    }
    count=mnCount;
    // cout<<count<<endl;
    ll ans=0;
    while(count>0){
        ans++;
        count/=2;
    }
    cout<<ans<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}