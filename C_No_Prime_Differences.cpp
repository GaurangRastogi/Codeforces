#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        if(i%2==1){
            for(int j=1;j<=m;j++){
                cout<<m*i+j<<" ";
            }
            cout<<endl;
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=1;j<=m;j++){
                cout<<m*i+j<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;
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