#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,flag=0;
    string str;
    cin>>n>>str;
    string ans="";
    ans+=str[0];
    for(int i=1;i<n;i++){
        //cout<<str[i]<<" "<<str[i-1]<<endl;
        if(str[i]<str[i-1]){
            ans+=str[i];
            flag=1;
        }
        else if(flag==1&&str[i]<=str[i-1])  ans+=str[i];
        else break;
    }
    cout<<ans;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}