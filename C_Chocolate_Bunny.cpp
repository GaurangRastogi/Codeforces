#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll ask(ll x,ll y){
    cout<<"? "<<x+1<<" "<<y+1<<endl<<endl;
    ll mod;
    cin>>mod;
    // cout<<mod<<endl;
    return mod;
}
void solve(ll n){
    vector<ll>ans(n,-1);
    ll mx=0;

    for(int i=1;i<n;i++){
        ll a=ask(i,mx);
        ll b=ask(mx,i);

        // cout<<endl<<a<<" "<<b<<endl;
        //mx > i
        if(a>b){
            ans[i]=a;
        }
        //i>mx
        else{
            ans[mx]=b;
            mx=i;
        }
    }
    ans[mx]=n;

    cout<<"! ";
    for(auto val:ans)
        cout<<val<<" ";
    cout<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    solve(n);
    cout.flush();
    return 0;
}