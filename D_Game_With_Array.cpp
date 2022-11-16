#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,s;
    cin>>n>>s;

    if(2*n<=s){
        cout<<"YES"<<endl;
        while(n>1){
            cout<<2<<" ";
            s-=2;
            n--;
        }
        cout<<s<<endl;
        cout<<1<<endl;
    }
    else    
        cout<<"NO"<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}