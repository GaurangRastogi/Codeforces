#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
   ll p,sum=0,ind=25;
   string str;
   cin>>str>>p;
   vector<ll>v(26,0);
   for(int i=0;i<str.size();i++){
        v[str[i]-'a']++;
        sum+=str[i]-'a'+1;
   }
   while(sum>p){
        while(v[ind]==0)
            ind--;
        //cout<<ind<<" ";
        if((sum-p)>=v[ind]*(ind+1)){
            sum-=v[ind]*(ind+1);
            v[ind]=0;
            ind--;
        }
        else{
            v[ind]--;
            sum-=ind+1;
        }
   }
   string ans="";
   for(int i=0;i<str.size();i++){
        if(v[str[i]-'a']>0){
            ans+=str[i];
            v[str[i]-'a']--;
        }
   }
   cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}