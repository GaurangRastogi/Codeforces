#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    set<char>st;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])  st.insert(b[i]);
    }
    return st.size();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}