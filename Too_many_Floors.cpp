#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,m;
    cin>>n>>m;
    return abs((m-1)/10-(n-1)/10);
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