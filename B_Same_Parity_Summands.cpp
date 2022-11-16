#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,k;
    cin>>n>>k;
    if(n<k) {cout<<"NO"<<endl;return;}
    if(n%2==0&&n>=2*k) {
        cout<<"YES"<<endl;
        for(int i=1;i<=k-1;i++) {cout<<2<<" ";}
        cout<<n-(2*k-2)<<endl;
        return;
    } 
    if((n-k+1)%2==0)   {cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
    for(int i=1;i<=k-1;i++) {cout<<1<<" ";}
    cout<<n-k+1<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
}