#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v){
        cin>>it;
    }

    ll extra=0;
    for(int i=0;i<n;i++){
        if(v[i]>i){
            extra+=v[i]-i;
        }
        else if(v[i]<i){
            if(extra>=i-v[i]){
                extra=extra+v[i]-i;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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
