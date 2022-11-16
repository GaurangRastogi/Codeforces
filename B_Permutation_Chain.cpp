#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        v[i]=i+1;
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        swap(v[i],v[i+1]);
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return ;
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