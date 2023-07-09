#include<bits/stdc++.h>
using namespace std;


void solve(){
    
    int n,m,val;
    cin>>n;

    int ans=0;
    vector<vector<int>>v(n);
    map<int,int>mp;

    for(int i=0;i<n;i++){
        cin>>m;
        vector<int>temp;
        for(int j=0;j<m;j++){
            cin>>val;
            temp.push_back(val);
            mp[val]++;
        }
        v[i]=temp;

    }

    for(int i=0;i<v.size();i++){
        bool temp=false;
        for(int j=0;j<v[i].size();j++){
            if(mp[v[i][j]]==1){
                //one unique is there
                temp=true;
                break;
            }
        }
        if(temp==false){
            ans=1;
            break;
        }
    }


    if(ans==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}