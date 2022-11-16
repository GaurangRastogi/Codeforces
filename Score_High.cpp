#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b,c,d;
    cin>>n;
    cin>>a>>b>>c>>d;
    cout<<max(max(a,b),max(c,d))<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}