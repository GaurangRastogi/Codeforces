#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    ll n;
    cin>>n;
    string str,ans="";
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0'||str[i]=='1')
            continue;
        else{
            if(str[i]=='2')
                ans+="2";
            else if(str[i]=='3')
                ans+="3";
            else if(str[i]=='4')
                ans+="322";
            else if(str[i]=='5')
                ans+="5";
            else if(str[i]=='6')
                ans+="53";
            else if(str[i]=='7')
                ans+="7";
            else if(str[i]=='8')
                ans+="7222";
            else    ans+="7332";
        }
    }
    sort(ans.begin(),ans.end(),greater<int>());
    cout<<ans;
    return 0;
}