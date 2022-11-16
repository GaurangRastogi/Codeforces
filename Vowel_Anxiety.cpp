#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,l=0,h,flag=1;
    cin>>n;
    string str,s="";
    char ans[n];
    h=n-1;
    char ch;
    cin>>str;
    for(int i=n-1;i>=0;i--){
        ch=str[i];
        if(flag==0)
            ans[l++]=ch;
        else if(flag==1)
            ans[h--]=ch;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            flag=1-flag;
        }
    }
    for(auto i:ans) 
        s+=i;
    cout<<s<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)  
    solve();
    return 0;
}