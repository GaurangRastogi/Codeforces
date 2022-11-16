#include<bits/stdc++.h>
using namespace std;
string solve(){
   int a,b;
   cin>>a>>b;
   int mn=min(a,b),mx=max(a,b);
   string ans="";
   char temp;
   for(int i=0;i<mn;i++){
        ans+="01";
   }
   if(a>b){
        temp='0';
   }
   else temp='1';
   for(int i=mn;i<mx;i++)   ans+=temp;
   return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  
        cout<<solve()<<endl;
    return 0;
}