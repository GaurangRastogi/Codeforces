#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//idont_hatephy
void solve(){
    ll n,count=0;
    cin>>n;
    vector<ll>v(n,0),arr(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]-v[i];
    }
    sort(arr.begin(),arr.end());
    ll l=0,h=n-1;
    while(l<h){
        if(arr[l]+arr[h]>-1){
            count++;
            h--;
        }
        l++;
    }
    cout<<count<<endl;
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