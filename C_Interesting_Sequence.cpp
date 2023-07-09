#include<bits/stdc++.h>
using namespace std;
#define M 64;
typedef long long int ll;
void solve(){
    ll x,y;
    cin>>x>>y;

    if(x<y){
        cout<<-1<<endl;
        return;
    }
    if(x==y){
        cout<<x<<endl;
        return;
    }
    
    bitset<64>bx(x),by(y);

    for(int i=0;i<64;i++){
        if(by[i]==1&&bx[i]==0){
            cout<<-1<<endl;
            return;
        }
    }

    ll mn=65;
    for(int i=0;i<64;i++){
        if(by[i]==1){
            mn=i;
            break;
        }
    }

    ll mx=-1;
    for(int i=0;i<64;i++){
        if(bx[i]==1&&by[i]==0){
            mx=i;
        }
    }

    // cout<<mx<<" "<<mn<<endl;
    if(mx>mn){
        cout<<-1<<endl;
        return;
    }

    for(int i=0;i<=mx;i++){
        bx[i]=0;
    }
    if(bx[mx+1]==1){
        cout<<-1<<endl;
        return;
    }
    bx[mx+1]=1;
    
    cout<<bx.to_ullong()<<endl;
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