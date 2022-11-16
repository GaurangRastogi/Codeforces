#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll arr[10]={1, 2 ,4, 3, 6, 10, 8, 9, 7, 5};
    if(n==3){
        cout<<"-1"<<endl;
    }
    else{
        if(n<=10){
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
        }
        else{
            for(int i=0;i<10;i++){
                cout<<arr[i]<<" ";
            }
            for(int i=11;i<=n;i++){
                cout<<i<<" ";
            }
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