#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,temp;
    cin>>n;

    set<ll>st{0};
    for(int i=1;i<=sqrt(n)+1;i++){
        temp=n/i;
        st.insert(temp);
        if(temp!=0)
            st.insert(n/temp);
    }
    cout<<st.size()<<endl;
    for(auto i:st)
        cout<<i<<" ";
    cout<<endl;
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