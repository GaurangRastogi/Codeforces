#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,count=0;
    cin>>n;
    string str;
    cin>>str;
    int st=0,end=n-1;
    while(st<end){
        if(str[st]=='('&&str[end]==')'){
            count+=2;
            st++;
            end--;
        }
        else if(str[st]==')')   st++;
        else end--;
    }
    cout<<n-count<<endl;
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