#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,l=-1,r=-1;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]==v[i+1]){
            if(l==-1){
                l=i;
                r=i;
            }
            else{
                r=i;
            }
        }
    }
    if(l==r)    
        return 0;
    else    
        return max(1ll,r-l-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}