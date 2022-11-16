#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll count=0,count1=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            if(count1>0){
                count++;
                count1=0;
            }
        }
        else count1++;
    }
    cout<<count<<endl;
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