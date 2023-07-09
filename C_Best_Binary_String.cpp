#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 
//tutorial
void solve( ){
    
    string str;
    cin>>str;

    ll n=str.size();

    if(str[0]=='?')
        str[0]='0';

    for(int i=1;i<n;i++){
        if(str[i]=='?')
            str[i]=str[i-1];
    }
    cout<<str<<endl;
}    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--)
    solve();
    return 0;
}