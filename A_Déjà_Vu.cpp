#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){

    string str;
    cin>>str;

    ll l=0,h=str.size()-1;


    while(l<=h){
        if(str[h]!='a'){
            cout<<"YES"<<endl;
            string ans=str.substr(0,l)+'a'+str.substr(l);
            cout<<ans<<endl;
            return;
        }
        else if(str[l]!='a'){
            cout<<"YES"<<endl;
            string ans=str.substr(0,h)+'a'+str.substr(h);
            cout<<ans<<endl;
            return;
        }
        else{
            l++;
            h--;
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}
