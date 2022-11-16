#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
   string str;
   cin>>str;
   char a=str[0],b=str[1],c=str[2];
   if((a=='y'||a=='Y')&&(b=='e'||b=='E')&&(c=='s'||c=='S'))
    cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}