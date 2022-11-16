#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    char ch;
    vector<vector<int>>v(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ch;
            v[i][j]=ch-'0';
        }
    }
    int i=0,j=0,ans=0,temp,count=0;
    while(i+j+1<n){
        cout<<i<<" "<<j<<endl<<endl;
        for(int k=i;k<n-i-1;k++){
            temp=v[k][j]+v[j][n-k-1]+v[n-k-1][n-j-1]+v[n-j-1][k];
            cout<<k<<endl<<endl;
            if(temp==1||temp==3) ans+=1;
            if(temp==2) ans+=2;
            //cout<<endl<<endl;
        }
        i++;
        j++;
        //cout<<endl;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}