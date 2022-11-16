#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//sum_odan
void solve(){
    ll n,c,q,k;
    cin>>n>>c>>q;
    string str;
    cin>>str;
    str="0"+str;
    map<ll,ll>mp{};
    set<ll>st{};
    ll l,r,left=n+1;
    for(int i=0;i<c;i++){
        cin>>l>>r;
        st.insert(left);
        st.insert(left+r-l);
        mp[left]=l;
        mp[left+r-l]=r;
        left+=r-l+1;
    }

    for(int i=0;i<q;i++){
        cin>>k;
        while(k>n){
            auto it=st.upper_bound(k);
            it--;
            k=mp[*it]+k - (*it);
        }
        cout<<str[k]<<endl;
    }
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