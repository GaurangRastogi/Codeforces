#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,z,x,val;
    cin>>n>>z;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>x;
        val=x|z;
        if(val>mx)    mx=val;
    }
    //cout<<mx<<" "<<z<<endl;
    return mx;
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