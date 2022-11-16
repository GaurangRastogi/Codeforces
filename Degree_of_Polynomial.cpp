#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,count=0,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x!=0) count=i;
    }
    cout<<count<<endl;
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