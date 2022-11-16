#include<bits/stdc++.h>
using namespace std;
bool check(string str){
    int count=0;
    for(auto i:str){
        if(i>='a'&&i<='z')  count++;
    }
    if(count==0||(count==1&&(str[0]>='a'&&str[0]<='z'))) return true;
    return false;
}
string solve(){
    string str;
    cin>>str;
    if(check(str)==true)
        for(int i=0;i<str.size();i++){
            if(str[i]<='z'&&str[i]>='a') str[i]+='A'-'a';
            else str[i]+='a'-'A';
        }
    return str;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<solve();
}