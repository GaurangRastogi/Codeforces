#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l,b,n,x,y;
    cin>>l>>b>>n;

    vector<int>v1(n+2),v2(n+2);
    v1[0]=0;
    v1[n+1]=l+1;
    v2[0]=0;
    v2[n+1]=b+1;

    for(int i=1;i<=n;i++){
        cin>>x>>y;
        v1[i]=x;
        v2[i]=y;
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int mx1=0,mx2=0;

    for(int i=1;i<=n+1;i++){
        mx1=max(mx1,v1[i]-v1[i-1]);
        mx2=max(mx2,v2[i]-v2[i-1]);
    }

    cout<<(mx1-1)*(mx2-1)<<endl;

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