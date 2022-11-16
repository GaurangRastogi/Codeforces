#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n;
    unordered_map<int,vector<int>>um;
    for(int i=0;i<n;i++){
        cin>>x;
        um[x].push_back(i);
    }
    int a,l,r,count,mx_count=0,mx=0;
    for(auto i:um){
        count=1;
        mx_count=1;
        //cout<<i.first<<" "<<i.second[0]<<" ";
        for(int j=1;j<i.second.size();j++){
            //cout<<i.second[j]<<" ";
            if(i.second[j-1]+=i.second[j]){
                count++;
            }
            else{
                mx_count=max(count,mx_count);
                count=max(0,i.second[j]-i.second[j-1]+1);
            }
        }
        mx_count=max(mx_count,count);
        //cout<<mx_count<<endl;
        if(mx_count>mx){
            mx=mx_count;
            a=i.first;
            l=i.second[0]+1;
            r=i.second.back()+1;
        }
    }
    cout<<a<<" "<<l<<" "<<r<<endl;
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