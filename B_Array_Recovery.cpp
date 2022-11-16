#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<ll>ans(n,0);
    ans[0]=v[0];
    for(int i=1;i<n;i++){
        if(v[i]==0)
            ans[i]=ans[i-1];
        else if(ans[i-1]-v[i]>=0){
            cout<<-1<<endl;
            return;
        }
        else{
            ans[i]=ans[i-1]+v[i];
        }
    }
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
    return;
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