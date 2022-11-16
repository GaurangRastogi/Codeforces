#include<bits/stdc++.h>
using namespace std;
void solve(){
    char s[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
        cin>>s[i][j];
        }
    }
    for(int i=1;i<7;i++){
        for(int j=1;j<7;j++){
            if(s[i][j]=='#'&&s[i+1][j+1]=='#'&&s[i-1][j-1]=='#'&&s[i-1][j+1]=='#'&&s[i+1][j-1]=='#'){
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }   
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