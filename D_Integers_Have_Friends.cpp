#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 
 
bool check(vector<vector<ll>>&table,vector<ll>&arr,ll k){
    
    ll j=(int)log2(k);
    ll n=arr.size();

    for(int i=0;i+k<=n;i++){
        ll gcd=__gcd(table[i][j],table[(i+k-1)-(1<<j)+1][j]);
        if(gcd>1)
            return true;
    }
    return false;
 
}
void solve( ){
    ll n;
    cin>>n;
 
    vector<ll>temp(n);
    for(auto &it:temp)
        cin>>it;
 
    if(n==1){
        cout<<1<<endl;
        return;
    }
    vector<ll>arr;
    for(int i=1;i<n;i++){
        arr.push_back(abs(temp[i]-temp[i-1]));
    }
    
    n=arr.size();
    ll k=log2(n)+1;
    //create sparse table
    vector<vector<ll>>sparse_table(n,vector<ll>(k,0));
    
    for(int i=0;i<n;i++)
        sparse_table[i][0]=arr[i];
 
    for(int j=1;j<=log2(n);j++){
        for(int i=0;i+(1<<j)<=n;i++){
            sparse_table[i][j]=__gcd(sparse_table[i][j-1],sparse_table[i+(1<<(j-1))][j-1]);
        }
    }
 

    ll l=0,h=n+1;

    // l-> always true, h-> always false
    while(l+1<h){
        ll k=(l+h)>>1;
 
        if(check(sparse_table,arr,k))
            l=k;
        else
            h=k;
 
    }
    cout<<l+1<<endl;
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