#include<bits/stdc++.h>
using namespace std;
void solve(){
    string ans[9],str[9];
    for(int i=0;i<9;i++){
        string temp="";
        cin>>str[i];
        for(int j=0;j<9;j++){
            if(str[i][j]=='1'){
                temp+='9';
            }
            else temp+=str[i][j];
        }
        ans[i]=temp;
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
}