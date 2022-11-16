#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,ind=0,mx=0,flag=0;
    cin>>n;
    vector<ll>a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=mx){
            mx=a[i];
            ind=i;
        }
    }
    for(int i=0;i<ind;i++){
        if(a[i]>a[i+1]){
            flag=1;
            break;
        }
    }
    for(int i=ind;i<n-1;i++){
        if(a[i]<a[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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