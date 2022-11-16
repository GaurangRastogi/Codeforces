#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,ind;
    cin>>n;
    vector<long long>v(n,0);
    unordered_map<long long,int>um{};
    for(int i=0;i<n;i++){
        cin>>v[i];
        um[v[i]]++;
    }
    long long mx=0,mx_val=0;
    for(auto i:um){
        if(i.second>mx){
            mx=i.second;
            mx_val=i.first;
        }
    }
    cout<<n-mx<<endl;
    for(int i=0;i<n;i++){
        if(v[i]==mx_val){
            ind=i;
            break;
        }
    }
    for(int i=ind-1;i>=0;i--){
        if(v[i+1]>v[i]) {
            cout<<1<<" "<<i+1<<" "<<i+2<<endl;
            v[i]=v[i+1];
        }
        else if(v[i+1]<v[i]){
            cout<<2<<" "<<i+1<<" "<<i+2<<endl;
            v[i]=v[i+1];
        }
    }
    for(int i=ind+1;i<n;i++){
        if(v[i-1]>v[i]){
            cout<<1<<" "<<i+1<<" "<<i<<endl;
            v[i]=v[i-1];
        }
        else if(v[i-1]<v[i]){
            cout<<2<<" "<<i+1<<" "<<i<<endl;
            v[i]=v[i-1];
        }
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}