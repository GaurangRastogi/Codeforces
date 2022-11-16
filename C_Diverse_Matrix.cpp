#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a==1&&b==1){
        cout<<0<<endl;
        return;
    }
    ll flag=a>b;
    ll mx=max(a,b),mn=min(a,b),temp=mx+2;
    vector<vector<ll>>mat(mn,vector<ll>(mx,0));
    for(int i=0;i<mx;i++){
        mat[0][i]=i+2;
    }
    for(int i=1;i<mn;i++){
        for(int j=0;j<mx;j++){
            mat[i][j]=mat[0][j]*(temp);
        }
        temp++;
    }

    if(flag==1){
        for(int i=0;i<mx;i++){
            for(int j=0;j<mn;j++){
                cout<<mat[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        for(int i=0;i<mn;i++){
            for(int j=0;j<mx;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}