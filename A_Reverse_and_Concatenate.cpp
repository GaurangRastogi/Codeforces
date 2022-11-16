#include<bits/stdc++.h>
using namespace std;
int check(string s,int n){
    int l=0,h=n-1;
    while(l<=h){
        if(s[l]!=s[h])  return 0;
        l++;
        h--;
    }
    return 1;
}
int solve(){
    int n,k;
    cin>>n>>k;
    string s,t;
    cin>>s;
    if(k==0)   return 1;
    else    return 2-check(s,n);
}
int main(){
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}