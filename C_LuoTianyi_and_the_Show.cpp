#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m,val;
    cin>>n>>m;

    set<ll>st;
    ll cl=0,cr=0;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val==-1){
            cl++;
        }
        else if(val==-2){
            cr++;
        }
        else{
            st.insert(val);
        }
    }

    ll len=st.size();
    ll ans=min(m,max(cr,cl)+len);

    ll visit=0;
    for(auto val:st){
        ll left=val-1,right=m-val;
        
        ans=max(ans,1+min(left,visit+cl)+min(right,cr+len-(visit+1)));
        visit++;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
