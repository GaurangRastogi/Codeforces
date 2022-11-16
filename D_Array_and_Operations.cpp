#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//sujmol


void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
   
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    ll sum=0;
    for(int i=0;i<n;i++){
        if(i<k){
            sum+=v[i+k]/v[i];
        }
        else if(i>=2*k)
            sum+=v[i];
    }
    cout<<sum<<endl;
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