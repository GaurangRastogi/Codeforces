#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,a,b;
    cin>>n;
    map<int,vector<int>>mp{};
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        mp[a].push_back(b);
    }
    int j=0,curr=1,mx_vertices=0,mx=0,temp=1;
    while(j<n&&mp.size()>0){
        for(int i=0;i<mp[curr].size();i++){
            cout<<mp[curr][i]<<" "<<mp[mp[curr][i]].size()<<endl;
            if(mp[mp[curr][i]].size()>mx){
                temp=mp[curr][i];
                mx=mp[mp[curr][i]].size();
            }
        }
        curr=temp;
        mp[curr]={};
        j++;
        mx_vertices+=mx;
        mx=0;
    }
    return mx_vertices;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    
}