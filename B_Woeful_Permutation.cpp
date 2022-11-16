#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin>>n;
    if(n%2){
        cout<<1<<" ";
        for(int i=2;i<=n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }
    else{
        cout<<2<<" "<<1<<" ";
        for(int i=3;i<=n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }
    cout<<endl;
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