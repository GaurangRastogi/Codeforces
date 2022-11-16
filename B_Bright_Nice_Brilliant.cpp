#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<"1"<<endl;
    cout<<"1 1"<<endl;

    int count=1;
    for(int i=3;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<"1 ";
            else    
                cout<<"0 ";
        }
        cout<<endl;
    }
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