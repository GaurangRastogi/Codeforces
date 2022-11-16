#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<int>st;
    while(n>0){
        st.insert(n%10);
        n/=10;
    }
    return st.size()==1?""
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
}