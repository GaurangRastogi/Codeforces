#include<bits/stdc++.h>
using namespace std;
int check(string st,char ch){
    for(int i=0;i<st.size();i++){
        if(st[i]==ch&&(i+1)%2==1)   return i+1;
    }
    return -1;
}
string solve(){
    string st;
    char ch;
    cin>>st>>ch;
    if(check(st,ch)==-1||check(st,ch)%2==0) return "NO";
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