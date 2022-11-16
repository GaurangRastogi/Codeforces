#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,mn=INT_MAX;
    cin>>n;
    string str,temp;
    cin>>str;
    for(int i=0;i<n;i++){
        if(i+1<n){
            if(str[i]=='a'&&str[i+1]=='a')
                return 2;
        }
        if(i+2<n){
            if(str[i]=='a'&&str[i+2]=='a')
                mn=3;
        }
        if(i+3<n){
            if(str.substr(i,4)=="acba"||str.substr(i,4)=="abca")
                mn=min(mn,4ll);
        }
        if(i+6<n){
            temp=str.substr(i,7);
            //cout<<temp<<endl;
            if(temp=="abbacca"||temp=="accabba")
                mn=min(mn,7ll);
        }
    }
    if(mn==INT_MAX)
        return -1;
    return mn;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    cout<<solve()<<endl;
    return 0;
}