#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n;
    cin>>n;
    string s,t,str1="",str2="";
    cin>>s>>t;
    int sa=0,sb=0,sc=0,ta=0,tb=0,tc=0;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a')   sa++;
        else if(s[i]=='b')  sb++;
        else    sc++;
        if(t[i]=='a')   ta++;
        else if(t[i]=='b')  tb++;
        else tc++;

    }
    if(sb!=tb||tc!=sc||sa!=ta)  return "NO";
    for(int i=0;i<n;i++){
        if(s[i]!='b')   str1+=s[i];
        if(t[i]!='b')   str2+=t[i];
        if(s[i]=='a')   a++;
        if(s[i]=='c')   b++;
        if(t[i]=='a')   c++;
        if(t[i]=='c')   d++;
        if(a<c||b>d)    return "NO";
    }
    if(str1!=str2)  return "NO";
    else return "YES";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
}