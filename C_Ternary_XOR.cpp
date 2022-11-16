#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,x;
    cin>>n;
    x=n;
    string str,str1="",str2="";
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]=='2'){
            str1+='1';
            str2+='1';
        }
        else if(str[i]=='1'){
            str1+='1';
            str2+='0';
            x=i;
            break;
        }
        else{
            str1+='0';
            str2+='0';
        }
    }
    for(int i=x+1;i<n;i++){
        if(str[i]=='2'||str[i]=='1'){
            str1+='0';
            str2+=str[i];
        }
        else{
            str1+='0';
            str2+='0';
        }
    }
    return str1+'\n'+str2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
}