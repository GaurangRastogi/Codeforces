#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;

    string str;
    cin>>str;

    char ch='1';
    
    string decrypted="";
    for(int i=0;i<n;i++){
        if(ch=='1'){
            ch=str[i];
        }
        else if(ch!=str[i])
            continue;
        else{
            decrypted+=str[i];
            ch='1';
        }
    }
    cout<<decrypted<<endl;
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