#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,mx=1e9;
    cin>>a>>b;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0&&(a/i<=b||i<=b)){
            //cout<<a/i<<" "<<i<<" "<<endl;
            if(a/i>b)  mx=min(mx,a/i);
            else if(i>b) mx=min(mx,i);
            else mx=min(mx,min(i,a/i));       
        }
    }
    cout<<mx<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
}