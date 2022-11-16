#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    int n,k;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int>op(n,0);
    string str;
    for(int i=0;i<n;i++){
        cin>>k>>str;
        for(int j=0;j<k;j++){
            if(str[j]=='U') op[i]--;
            else op[i]++;
        }
    }
    for(int i=0;i<n;i++){
        //cout<<op[i]<<" ";
        if(op[i]>0){
            while(op[i]>0){
                v[i]++;
                op[i]--;
                v[i]%=10;
            }
        }
        else{
            while(op[i]<0){
                v[i]--;
                if(v[i]==-1)    v[i]=9;
                op[i]++;
            }
        }
    }
    //cout<<endl;
    for(auto i:v)   
        cout<<i<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}