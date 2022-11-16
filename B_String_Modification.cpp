#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ans;
string mn;
void utility(string str,int c,string &mn){
    
    string temp=str.substr(0,c);
    string temp2=str.substr(c,str.size()-c);
    //cout<<c<<" "<<temp<<" "<<temp2<<endl;
    if((str.size()-c)%2)
    reverse(temp.begin(),temp.end());
    str=temp2+temp;

    //cout<<str<<" "<<mn<<" "<<endl;
    if(str<mn){
        //cout<<c<<endl;
        mn=str;
        ans=c+1;
    }
}
void solve(){
    ll n;
    cin>>n;
    ans=1;
    string str;
    cin>>str;
    mn=str;
    for(int i=1;i<n;i++){
        utility(str,i,mn);
    }
    cout<<mn<<endl<<ans<<endl;
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