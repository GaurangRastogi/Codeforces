#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    string st;
    cin>>st;
    int n=st.size(), m=0;
    vector<bool>v(26,false);
    for(int i=0;i<n;i++){
        if(v[st[i]-'a']){
            m+=2;
            for(int i=0;i<26;i++)
                v[i]=false;
        }
        else v[st[i]-'a']=true;
    }
    cout<<n-m<<endl;
    return;
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