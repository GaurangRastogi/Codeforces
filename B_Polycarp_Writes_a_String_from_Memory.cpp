#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
   string str;
   cin>>str;
   int count=0;
   set<char>st{};
   for(auto i:str){
        st.insert(i);
        if(st.size()>3){
            st={i};
            count++;
        }
   }
   if(st.size()>0)  count++;
   cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}