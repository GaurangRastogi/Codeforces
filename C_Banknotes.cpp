#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k,x,val,flag=0;
    cin>>n>>k;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>x;
        v[i]=pow(10,x);
    }
    vector<ll>temp(n,0);
    for(int i=0;i<n-1;i++){
        val=v[i+1]/v[i]-1;
        if(val>k){
            temp[i]=k+1;
            flag=1;
            break;
        }
        else{
            temp[i]=val;
            k-=temp[i];
        }
    }
    if(flag==0)
        temp[n-1]=k+1;
    val=n-1;
    while(temp[val]==0)
        val--;
    for(int i=val;i>=0;i--){
        cout<<temp[i];
    }
    cout<<endl;
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