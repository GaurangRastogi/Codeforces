#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,m;
    cin>>n>>m;

    ll sum1=0,sum2=0,val;

    for(int i=0;i<n;i++){
        cin>>val;
        sum1+=val;
    }

    for(int i=0;i<m;i++){
        cin>>val;
        sum2+=val;
    }

    if(sum1>sum2){
        cout<<"Tsondu";
    }
    else if(sum1<sum2){
        cout<<"Tenzing";
    }
    else{
        cout<<"Draw";
    }
    cout<<endl;

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}