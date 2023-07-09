#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 

void solve( ){
    
    ll n;
    cin>>n;

    string str;
    cin>>str;

    ll op=0,mx=0,cl=0;

    for(int i=0;i<n;i++){
        if(str[i]=='<'){
            op++;
            cl=0;
        }
        else{
            cl++;
            op=0;
        }
        mx=max(mx,max(cl,op)+1);
    }
    cout<<mx<<endl;
    
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