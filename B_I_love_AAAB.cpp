#include<bits/stdc++.h>
using namespace std;
string solve(){
   string str;
   cin>>str;
   stack<char>st{};
   for(int i=0;i<str.size();i++){
       if(str[i]=='A')  st.push(str[i]);
       else{
           if(st.size()==0) return "NO";
           else st.pop();
       }
   }
   if(str[str.size()-1]=='A') return "NO";
   return "YES";
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