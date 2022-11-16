#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mn=INT_MAX,mx=INT_MIN,cmx=0,cmn=0,x,flag=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<mn){
            mn=x;
            cmn=1;
        }
        else if(x==mn){
            cmn++;
        }
        if(x>mx){
            mx=x;
            cmx=1;
        }
        else if(x==mx){
            cmx++;
        }
    }
    if(mx==mn){
        cmx-=1;
        flag=2;
    }
    long long int ans=((long long int)cmx*(long long int)cmn)/(long long int)flag;
    cout<<mx-mn<<" "<<ans;
}