#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,flag;
    cin>>n;
    string str,temp,temp2;
    cin>>str;
    for(int i=n-1;i>=0;i--){
        if((i+1)%2==1){
            continue;
        }
        else{
            flag=(i+1)/2;
            temp=str.substr(0,flag);
            temp2=str.substr(flag,flag);
            if(temp!=temp2){
                cout<<"NO"<<endl;
                return;
            }
            i=(i+1)/2;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}