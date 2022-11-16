#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m,row=0;
    cin>>n>>m;
    ll a[2][4]={{1,0,0,1},{0,1,1,0}};
    for(int i=0;i<n;i+=4){
        for(int j=0;j<m;j++){
            cout<<a[row][j%4]<<" ";
        }
        cout<<endl;
        row++;
        for(int j=0;j<m;j++){
            cout<<a[row][j%4]<<" ";
        }
        cout<<endl;
        if(i+2==n) break;
         for(int j=0;j<m;j++){
            cout<<a[row][j%4]<<" ";
        }
        cout<<endl;
        row--;
        for(int j=0;j<m;j++){
            cout<<a[row][j%4]<<" ";
        }
        cout<<endl;  
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)  
    solve();
    return 0;
}