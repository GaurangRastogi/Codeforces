#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()==1||s=="10"||s=="01")   cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)  solve();
}