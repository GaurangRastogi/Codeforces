#include<bits/stdc++.h>
using namespace std;
string solve(){
   string str;
   cin>>str;
    string ans="",temp="";
    int t,mx=0,flag=0;
    if(str[0]=='9') {ans+=str[0];flag=1;}
    for(int i=flag;i<str.size();i++){
        t=str[i]-'0';
        t=min(t,9-t);
        ans+=to_string(t);
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--)  cout<<solve()<<endl;
}