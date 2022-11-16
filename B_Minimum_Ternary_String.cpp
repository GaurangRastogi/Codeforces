#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string str;
    cin>>str;
    int n=str.size();
    int one=0,zero=0,i;
    for(i=0;i<n;i++){
        if(str[i]=='2')
            break;
        else if(str[i]=='1')
            one++;
        else    
            zero++;
    }
    string temp="";
    for(i;i<n;i++){
        if(str[i]=='1')
            one++;
        else
            temp+=str[i];
        
    }

    string ans="";
    for(int i=0;i<zero;i++)
        ans+='0';
    for(int i=0;i<one;i++)
        ans+='1';
    ans+=temp;
    cout<<ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}