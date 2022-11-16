#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    int n,sum=0;
    cin>>n;
    string str;
    cin>>str;
    vector<int>v(26,0);
    for(int i=0;i<n;i++){
        //cout<<
        if(v[str[i]-'A']==0){
            sum+=2;
            v[str[i]-'A']=1;
        }
        else sum++;
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}