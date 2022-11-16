#include<bits/stdc++.h>
using namespace std;
int solve2(vector<int>v,int i,int j){
    int count=0;
    for(int k=j;k>=i;k--){
            if(v[k]==0) v[k]=1;
            else v[k]=0;
    }
    for(int l=0;l<v.size();l++){
        if(v[l]==1) count++;
    }
    return count;
}
int solve(){
    int n,x,mx=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        for(int j=v.size()-1;j>=i;j--){
            mx=max(mx,solve2(v,i,j));
        }
    }
   return mx; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    //cin>>t;
    t=1;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}