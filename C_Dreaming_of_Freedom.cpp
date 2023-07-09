#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll n=1e6;
ll spf[n+5];

void solve(){
   ll n,m;
   cin>>n>>m;
   
   if(n==1||m==1){
    cout<<"YES"<<endl;
    return;
   }
   ll smallestFactor=spf[n];
    // cout<<smallestFactor<<" ";
   if(smallestFactor>m){
        cout<<"YES"<<endl;
        return;
   }

   else{
        cout<<"NO"<<endl;
        return;
   }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    for(int i=1;i<=n;i++){
        spf[i]=i;
    }

    for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }

    // for(int i=0;i<=20;i++){
    //     cout<<spf[i]<<" ";
    // }
    // cout<<endl;

    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
