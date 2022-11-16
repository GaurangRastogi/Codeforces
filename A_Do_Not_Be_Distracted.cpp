#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<char>st;
    for(int i=0;i<n;i++){
        if(str[i]!=str[i+1]&&st.find(str[i+1])!=st.end()){
            cout<<"NO"<<endl;return;
        }    
        else if(str[i]!=str[i+1]){
            st.insert(str[i]);
        }
        else continue;
    }
    cout<<"YES"<<endl;return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
}