#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,count=0;
    cin>>n>>k;
    for(int i=k+1;i<=n;i++){
       // cout<<i-1<<" ";
        if((i-1)%5==0)  count++;
    }
    cout<<count<<endl;
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