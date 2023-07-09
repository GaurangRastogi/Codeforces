#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){

    //solution watched
    ll n,cnt=0,curr=0;
    cin>>n;
    bool flag=true;
    string rules;
    cin>>rules;

    for(int i=0;i<n;i++){
        if(rules[i]=='1')
            cnt++;
    }
    if(cnt%2||rules[0]=='0'||rules[n-1]=='0'){
        cout<<"NO"<<endl;
        return;
    }
    cnt/=2;
    string a="",b="";
    for(int i=0;i<n;i++){
        if(rules[i]=='1'){
            //since if rules[i]=='0' we are first adding ( to a then to b,
            //therefore num('(') in a is always greater or equal
            if(curr<cnt){
                a.push_back('(');
                b.push_back('(');
                curr++;
            }
            else{
                a.push_back(')');
                b.push_back(')');
            }
        }
        else{
            if(flag){
                a.push_back('(');
                b.push_back(')');
            }
            else{
                a.push_back(')');
                b.push_back('(');
            }
            flag=!flag;
        }
    }
    cout<<"YES"<<endl<<a<<endl<<b<<endl;
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
