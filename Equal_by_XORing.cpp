#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll a,b,n,i=0,mx=-1;
    cin>>a>>b>>n;
    if(a==b)    return 0;
    ll sum=0;
    while(a>0||b>0){
        if(a%2!=b%2){
            sum+=pow(2,i);
            mx=i; 
        }
        a/=2;
        b/=2;
        i++;
    }
    ll val1=pow(2,mx);
    if(sum<n)  return 1;
    else if(n>val1)    return 2;
    else return -1;  
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  
        cout<<solve()<<endl;
    return 0;
}