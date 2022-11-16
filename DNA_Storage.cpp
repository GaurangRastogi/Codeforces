#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i+=2){
        if(str[i]=='0'&&str[i+1]=='0')  cout<<'A';
        else if(str[i]=='0'&&str[i+1]=='1') cout<<'T';
        else if(str[i]=='1'&&str[i+1]=='0') cout<<'C';
        else    cout<<'G';
    }
    cout<<endl;
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