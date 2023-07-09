#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;

    string str;
    cin>>str;

    set<string>st;

    for(int i=0;i<n-1;i++){
        st.insert(str.substr(i,2));
    }
    cout<<st.size()<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}