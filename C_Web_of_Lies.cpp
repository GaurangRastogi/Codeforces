#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 
void solve( ){
    ll n,m;
    cin>>n>>m;

    vector<ll>vulnerable(n,0);

    ll a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        vulnerable[min(a,b)-1]--;
    }
    ll notVulernerable=0;
    for(auto i:vulnerable){
        // cout<<i<<" ";
        if(i>=0)
            notVulernerable++;
    }
    // cout<<endl;


    ll q,type;
    cin>>q;

    for(int i=0;i<q;i++){
        cin>>type;
        if(type==1){
            cin>>a>>b;
            ll val=min(a,b)-1;
            if(vulnerable[val]>=0){
                notVulernerable--;
            }
            vulnerable[val]--;
        }
        else if(type==2){
            cin>>a>>b;
            ll val=min(a,b)-1;
            vulnerable[val]=min(0ll,vulnerable[val]+1);
            if(vulnerable[val]>=0)
                notVulernerable++;
        }
        else{
            cout<<notVulernerable<<endl;
        }
    }
}    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // ll t;
    // cin>>t;

    // while(t--)
    solve();
    return 0;
}