#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    ll sum1=0,sum2=0;
    vector<ll>a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==1)
            sum1+=a[i];
        else
            sum2+=a[i];
    }
    ll flag=(sum1>sum2);
    for(int i=0;i<n;i++){
        if(i%2!=flag){
            cout<<1<<" ";
        }
        else 
            cout<<a[i]<<" ";
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