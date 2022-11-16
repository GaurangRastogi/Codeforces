#include<bits/stdc++.h>
using namespace std;
bool not_one(map<int,vector<int>>mp){
    for(auto i:mp){
        if(i.second.size()==1)  return true;
    }
    return false;
}
int main(){
    int n,m,a,b,c=0;
    cin>>n>>m;
    map<int,vector<int>>mp;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    while(not_one(mp)){
        vector<int>v;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second.size()==1){
                v.push_back(it->first);
            }
        }
        for(auto it:v){
            mp.erase(it);
        }
        vector<int>new_thread;
        for(auto it=mp.begin();it!=mp.end();it++){
            new_thread={};
            for(auto i:it->second){
                if(count(v.begin(),v.end(),i)==0)   new_thread.push_back(i);
            }
            mp[it->first]=new_thread;
        }
        c++;
    }
    cout<<c;
}