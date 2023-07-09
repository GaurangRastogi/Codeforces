#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    string str;
    cin>>str;
    set<char>st;
    
    ll n=str.size();
    for(int i=0;i<n/2;i++){
        st.insert(str[i]);
    }

    if(st.size()>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return;
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}