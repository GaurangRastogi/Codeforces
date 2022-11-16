#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        ans|=x;
    }
    int count=0;
    while(ans>0){
        if(ans%2==1)    count++;
        ans/=2;
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