#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void solve(){
    ll n;
    cin>>n;
    
    vector<ll>v(n);
    for(auto &it:v)
        cin>>it;

    ll mx=0;
    for(ll i=0;i<256;i++){
        vector<bool>visited(256,0);
        ll curr=0;
        for(int j=n-1;j>=0;j--){
            curr^=v[j];
            visited[curr]=true;
            
            mx=max(mx,curr);

            //since
            //a^b=c => b^c=a and a^c=b
            

            //therefore if curr^i is visited
            //then i must also possible
            if(visited[curr^i]){
                mx=max(mx,i);
            }
        }
    }
    cout<<mx<<endl;
    return;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}