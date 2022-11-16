#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,m,curr;
    cin>>n>>m;
    int mx_sec=-1,mx=0,ret;
    for(int i=0;i<n;i++){
        cin>>curr;
        if(curr>mx){
            mx_sec=mx;
            mx=curr;
        }
        else mx_sec=max(mx_sec,curr);
    }
    ret=2*(m/(mx+mx_sec));
    m%=(mx+mx_sec);
    if(m>mx)    return ret+2;
    else if(m>0)    return ret+1;
    else return ret;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
}