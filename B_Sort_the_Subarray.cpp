#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;

    vector<ll>v1(n),v2(n);
    
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    ll l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(v1[i]!=v2[i]){
            l=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(v1[i]!=v2[i]){
            r=i;
            break;
        }
    }

    while(l>0&&v2[l-1]<=v2[l]){
        l--;
    }

    while(r+1<n&&v2[r]<=v2[r+1]){
        r++;
    }
    cout<<l+1<<" "<<r+1<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}