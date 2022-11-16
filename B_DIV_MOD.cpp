#include<bits/stdc++.h>
using namespace std;
int  solve(){
    int l,r,a,mx=INT_MIN;
    cin>>l>>r>>a;
    for(int i=l;i<=r;i++){
        int val=r/a+r%a;
        mx=max(mx,val);
    }
    return mx;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }  
}