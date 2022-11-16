#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    vector<int>v(4,0);
    v[1]=a;
    v[2]=b;
    v[3]=c;
    for(int i=0;i<2;i++){
        if(v[x]==0){
            cout<<"NO"<<endl;
            return;
        }
        x=v[x];
    }
    cout<<"YES"<<endl;
    return;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}