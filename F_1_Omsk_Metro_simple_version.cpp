#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){

    ll n;
    cin>>n;


    vector<ll>mn(n+10),mx(n+10),currMn(n+10),currMx(n+10);

    mn[1]=0;
    currMn[1]=0;

    mx[1]=1;
    currMx[1]=1;


    char type;
    ll u,v,path,x,wt;

    ll node=2;
    for(int i=0;i<n;i++){
        cin>>type;

        if(type=='+'){
            cin>>x>>wt;

            if(currMx[x]+wt>0){
                currMx[node]=currMx[x]+wt;
            }
            else{
                currMx[node]=0;
            }

            mx[node]=max(currMx[node],mx[x]);


            if(currMn[x]+wt<0){
                currMn[node]=currMn[x]+wt;
            }
            else{
                currMn[node]=0;
            }
            mn[node]=min(currMn[node],mn[x]);
            
            node++;
        }

        else{
            cin>>u>>v>>path; 

            if(mx[v]>=path&&mn[v]<=path){
                cout<<"YES"<<endl;
            } 
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}